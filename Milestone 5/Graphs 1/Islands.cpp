#include <iostream>
#include <queue>
using namespace std;
void visitFiller(bool **edges, long long v, long long sv, bool *visited)
{
    queue<long long> pendingVertices;
    pendingVertices.push(sv);
    visited[sv] = true;
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
    }
}

int main()
{
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
    int count = 0;
    for (long long i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            count++;
            visitFiller(edges, v, i, visited);
        }
    }
    cout << count;
    return 0;
}
