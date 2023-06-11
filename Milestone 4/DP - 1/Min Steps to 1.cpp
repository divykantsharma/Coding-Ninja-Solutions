int countMinStepsToOne(int n)
{
    // Write your code here
    if (n == 1 || n == 0)
        return 0;
    int a = INT_MAX, b = INT_MAX, c = INT_MAX;
    if (n % 3 == 0)
        a = countMinStepsToOne(n / 3);
    if (n % 2 == 0)
        b = countMinStepsToOne(n / 2);
    c = countMinStepsToOne(n - 1);
    int ans = min(a, min(b, c)) + 1;
    return ans;
}
