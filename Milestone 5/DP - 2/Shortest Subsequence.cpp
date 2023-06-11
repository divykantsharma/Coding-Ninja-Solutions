int getans(char *s1, char *s2, int len1, int len2, int **dp)
{
    if (len1 <= 0)
    {
        return 1001;
    }
    if (len2 <= 0)
    {
        return 1;
    }
    if (dp[len1][len2] > -1)
    {
        return dp[len1][len2];
    }
    int ans = 0;
    int option1 = getans(s1 + 1, s2, len1 - 1, len2, dp);
    int i = 0;
    for (; i < len2; i++)
    {
        if (s1[0] == s2[i])
        {
            break;
        }
    }
    if (i == len2)
    {
        return 1;
    }
    int option2 = 1 + getans(s1 + 1, s2 + i + 1, len1 - 1, len2 - 1 - i, dp);
    ans = min(option1, option2);
    dp[len1][len2] = ans;
    return ans;
}

int solve(string S, string V)
{
    // Write your code here.
    char *s1 = new char[S.length()];
    char *s2 = new char[V.length()];
    for (int i = 0; i < S.length(); i++)
    {
        s1[i] = S[i];
    }
    for (int i = 0; i < V.length(); i++)
    {
        s2[i] = V[i];
    }
    int **dp = new int *[S.length() + 1];
    for (int i = 0; i <= S.length(); i++)
    {
        dp[i] = new int[V.length() + 1];
        for (int j = 0; j <= V.length(); j++)
        {
            dp[i][j] = -1;
        }
    }
    return getans(s1, s2, S.length(), V.length(), dp);
}
