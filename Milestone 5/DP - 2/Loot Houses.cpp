int maxMoneyLooted(int *arr, int n)
{
    int *output = new int[n];
    output[0] = arr[0];
    output[1] = max(arr[0], arr[1]);
    for (int i = 2; i < n; i++)
        output[i] = max(output[i - 1], output[i - 2] + arr[i]);
    return output[n - 1];
}
