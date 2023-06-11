int findMaxSquareWithAllZeros(int **arr, int row, int col)
{
    // Write your code here
    int **dp = new int *[row];
    for (int i = 0; i < row; i++)
    {
        dp[i] = new int[col];
        for (int j = 0; j < col; j++)
            dp[i][j] = 0;
    }

    int ans = 0;
    for (int i = 0; i < row; i++)
    {
        dp[i][0] = (arr[i][0]) ? 0 : 1;
        ans = max(ans, dp[i][0]);
    }
    for (int i = 0; i < col; i++)
    {
        dp[0][i] = (arr[0][i]) ? 0 : 1;
        ans = max(ans, dp[0][i]);
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (arr[i][j] == 1)
                dp[i][j] = 0;
            else
                dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}
