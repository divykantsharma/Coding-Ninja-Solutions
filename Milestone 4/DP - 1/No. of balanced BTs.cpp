#define mod 1000000007
int balancedBTs(int n, int *ans)
{
    // Write your code here
    if (n == 1 || n == 0)
        return 1;
    if (ans[n] != -1)
        return ans[n];
    int x = balancedBTs(n - 1, ans);
    int y = balancedBTs(n - 2, ans);
    int val1 = (int)(((long)x * x) % mod);
    int val2 = (int)((2 * (long)x * y) % mod);
    ans[n] = (val1 + val2) % mod;
    return ans[n];
}

int balancedBTs(int n)
{
    // Write your code here
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
        ans[i] = -1;
    return balancedBTs(n, ans);
}
