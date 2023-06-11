int minCostPath(int **input, int m, int n)
{
    // Write your code here
    int **output = new int *[m];
    for (int i = 0; i < m; i++)
        output[i] = new int[n];

    output[m - 1][n - 1] = input[m - 1][n - 1];

    for (int i = n - 2; i >= 0; i--)
        output[m - 1][i] = output[m - 1][i + 1] + input[m - 1][i];

    for (int i = m - 2; i >= 0; i--)
        output[i][n - 1] = output[i + 1][n - 1] + input[i][n - 1];

    for (int i = m - 2; i >= 0; i--)
        for (int j = n - 2; j >= 0; j--)
            output[i][j] = min(output[i + 1][j], min(output[i + 1][j + 1], output[i][j + 1])) + input[i][j];

    return output[0][0];
}
