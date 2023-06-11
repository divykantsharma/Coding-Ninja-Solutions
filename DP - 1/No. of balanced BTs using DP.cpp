#define mod 1000000007
int balancedBTs(int n)
{
    // Write your code here
    int *ans = new int[n + 1];
    ans[0] = 1;
    ans[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int val1 = (int)(((long)ans[i - 1] * ans[i - 1]) % mod);
        int val2 = (int)((2 * (long)ans[i - 1] * ans[i - 2]) % mod);
        ans[i] = (val1 + val2) % mod;
    }
    return ans[n];
}
