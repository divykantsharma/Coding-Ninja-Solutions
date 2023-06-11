int countWaysToMakeChange(int arr[], int n, int value, int **temp)
{
    if (n == 0)
        return 0;
    if (value == 0)
        return 1;
    if (value < 0)
        return 0;

    if (temp[n][value] > 0)
        return temp[n][value];

    int ans1 = countWaysToMakeChange(arr + 1, n - 1, value, temp);
    int ans2 = countWaysToMakeChange(arr, n, value - arr[0], temp);
    temp[n][value] = ans1 + ans2;
    return ans1 + ans2;
}
int countWaysToMakeChange(int denominations[], int numDenominations, int value)
{
    // Write your code here
    int **output = new int *[11];
    for (int i = 0; i < 11; i++)
    {
        output[i] = new int[1001];
        for (int j = 0; j < 1001; j++)
            output[i][j] = 0;
    }
    int ans = countWaysToMakeChange(denominations, numDenominations, value, output);
    for (int i = 0; i < 11; i++)
    {
        delete[] output[i];
    }
    delete[] output;
    return ans;
}
