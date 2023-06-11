int knapsack(int *weights, int *values, int n, int maxWeight)
{
    // write your code here
    if (maxWeight == 0 || n == 0)
        return 0;

    if (maxWeight < weights[0])
        return knapsack(weights + 1, values + 1, n - 1, maxWeight);
    else
    {
        int a = knapsack(weights + 1, values + 1, n - 1, maxWeight - weights[0]) + values[0];
        int b = knapsack(weights + 1, values + 1, n - 1, maxWeight);
        return max(a, b);
    }
}
