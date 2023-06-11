int longestIncreasingSubsequence(int *arr, int n)
{
    // Write your code here
    int *output = new int[n];
    output[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int ans = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
                ans = max(output[j], ans);
        }
        output[i] = ans + 1;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
        res = max(output[i], res);
    return res;
}
