#include <iostream>
#include <queue>
#include <map>
using namespace std;

void getPathBFS(bool **edges, long long v, long long v1, long long v2, bool *visited)
{
    queue<int> pendingVertices;
    map<int, int> m;
    pendingVertices.push(v1);
    visited[v1] = true;
    while (!pendingVertices.empty())
    {
        for (int i = 0; i < v; i++)
        {
            if (visited[i])
                continue;
            if (i == pendingVertices.front())
                continue;
            if (edges[pendingVertices.front()][i])
            {
                pendingVertices.push(i);
                m[i] = pendingVertices.front();
                visited[i] = true;
            }
        }
        pendingVertices.pop();
    }
    if (!visited[v2])
        return;
    int i = v2;
    cout << v2 << " ";
    while (i != v1)
    {
        cout << m[i] << " ";
        i = m[i];
    }
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
    getPathBFS(edges, v, v1, v2, visited);
    return 0;
}
