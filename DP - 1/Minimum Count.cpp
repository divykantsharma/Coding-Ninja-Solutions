int minCount(int n, int *ans)
{
    if (sqrt(n) - floor(sqrt(n)) == 0)
        return 1;
    if (n == 0 || n == 1 || n == 2 || n == 3)
        return n;
    if (ans[n] != -1)
        return ans[n];
    int val = n;
    for (int i = 1; (i * i) <= n; i++)
        ans[n] = val = min(val, 1 + minCount(n - i * i, ans));
    return ans[n];
}

int minCount(int n)
{
    // Write your code here
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
        ans[i] = -1;
    return minCount(n, ans);
}
