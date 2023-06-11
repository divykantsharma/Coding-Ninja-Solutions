#include <iostream>
using namespace std;

int countCycles(bool **arr, long long n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i][j] == 1)
            {
                for (int k = 0; k < n; k++)
                {
                    if (j != k && k != i && arr[j][k] == 1)
                    {
                        if (arr[i][k] == 1)
                        {
                            count += 1;
                        }
                    }
                }
            }
        }
    }
    return count;
}

int main()
{
    // Write your code here
    long long v, e;
    cin >> v >> e;
    bool **edges = new bool *[v];
    for (long long i = 0; i < v; i++)
    {
        edges[i] = new bool[v];
        for (long long j = 0; j < v; j++)
        {
            edges[i][j] = false;
        }
    }
    for (long long i = 0; i < e; i++)
    {
        long long start, end;
        cin >> start >> end;
        edges[start][end] = true;
        edges[end][start] = true;
    }
    cout << countCycles(edges, v) / 6;
    return 0;
}
