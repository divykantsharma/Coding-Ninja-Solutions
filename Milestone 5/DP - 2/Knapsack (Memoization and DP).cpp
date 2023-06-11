// dynamic programming
int knapsack(int *weights, int *values, int n, int maxWeight)
{
    // Write your code here
    int **output = new int *[n + 1];
    for (int i = 0; i <= n; i++)
        output[i] = new int[maxWeight + 1];

    for (int i = 0; i <= n; i++)
        output[i][0] = 0;

    for (int i = 0; i <= maxWeight; i++)
        output[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= maxWeight; j++)
        {
            if (j < weights[n - i])
                output[i][j] = output[i - 1][j];
            else
                output[i][j] = max(output[i - 1][j - weights[n - i]] + values[n - i], output[i - 1][j]);
        }
    }
    return output[n][maxWeight];
}
