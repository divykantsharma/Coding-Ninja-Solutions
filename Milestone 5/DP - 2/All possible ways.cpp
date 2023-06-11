#include <cmath>
int getAllWays(int a, int b, int base, int *output)
{
    if (a < pow(base, b))
        return 0;
    if (a == pow(base, b))
        return 1;

    output[a] = getAllWays(a - pow(base, b), b, base + 1, output) + getAllWays(a, b, base + 1, output);

    return output[a];
}

int getAllWays(int a, int b)
{
    // Write your code here
    int *output = new int[10000];
    for (int i = 0; i < 10000; i++)
        output[i] = -1;
    return getAllWays(a, b, 1, output);
}
