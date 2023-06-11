int editDistance(string s1, string s2, int **output)
{
    int m = s1.size(), n = s2.size();
    if (m == 0 || n == 0)
        return max(m, n);

    if (output[m][n] != -1)
        return output[m][n];

    int ans;
    if (s1[0] == s2[0])
        ans = editDistance(s1.substr(1), s2.substr(1), output);
    else
    {
        int x = editDistance(s1.substr(1), s2, output) + 1;
        int y = editDistance(s1, s2.substr(1), output) + 1;
        int z = editDistance(s1.substr(1), s2.substr(1), output) + 1;
        ans = min(x, min(y, z));
    }

    output[m][n] = ans;

    return output[m][n];
}
int editDistance(string s1, string s2)
{
    // Write your code here
    int m = s1.size(), n = s2.size();
    int **output = new int *[m + 1];
    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n + 1];
        for (int j = 0; j <= n; j++)
            output[i][j] = -1;
    }
    return editDistance(s1, s2, output);
}
