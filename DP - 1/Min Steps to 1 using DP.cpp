/*
Memoization
int countMinStepsToOne(int n, int *ans)
{
    if (n == 1 || n == 0)
        return 0;
    if (ans[n] != -1)
        return ans[n];
    int a = INT_MAX, b = INT_MAX, c = INT_MAX;
    if (n % 3 == 0)
        a = countMinStepsToOne(n / 3, ans);
    if (n % 2 == 0)
        b = countMinStepsToOne(n / 2, ans);
    c = countMinStepsToOne(n - 1, ans);
    if (a <= b && a <= c)
        ans[n] = 1 + a;
    else if (b <= a && b <= c)
        ans[n] = 1 + b;
    else
        ans[n] = 1 + c;
    return ans[n];
}

int countMinStepsToOne(int n)
{
    // Write your code here
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
        ans[i] = -1;
    return countMinStepsToOne(n, ans);
}
*/

int countStepsToOne(int n)
{
    // Write your code here
    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int a = INT_MAX, b = INT_MAX, c = INT_MAX;
        if (i % 3 == 0)
            a = ans[i / 3];
        if (i % 2 == 0)
            b = ans[i / 2];
        c = ans[i - 1];
        if (a <= b && a <= c)
            ans[i] = 1 + a;
        else if (b <= a && b <= c)
            ans[i] = 1 + b;
        else
            ans[i] = 1 + c;
    }
    return ans[n];
}
