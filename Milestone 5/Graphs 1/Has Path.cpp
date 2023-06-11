#include <iostream>
#include <queue>
using namespace std;

bool hasPath(bool **edges, long long v, bool *visited, long long v1, long long v2)
{
    if (v2 >= v || v1 >= v)
        return false;
    if (v1 == v2)
        return true;
    if (edges[v1][v2] || edges[v2][v1])
        return true;
    queue<long long> pendingVertices;
    pendingVertices.push(v1);
    visited[v1] = true;
    while (!pendingVertices.empty())
    {
        for (long long i = 0; i < v; i++)
        {
            if (i == pendingVertices.front())
                continue;
            if (visited[i])
                continue;
            if (edges[pendingVertices.front()][i])
            {
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
        pendingVertices.pop();
        if (visited[v2])
            return true;
    }
    return false;
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
    bool *visited = new bool[v];
    for (long long i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    long long v1, v2;
    cin >> v1 >> v2;
    if (hasPath(edges, v, visited, v1, v2))
        cout << "true";
    else
        cout << "false";
    return 0;
}
