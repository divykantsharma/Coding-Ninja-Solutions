#include <iostream>
#include <vector>
using namespace std;

vector<long long> getPath(bool **edges, long long v, bool *visited, long long v1, long long v2)
{
    vector<long long> path;
    if (v1 == v2)
    {
        path.push_back(v1);
        return path;
    }
    for (long long i = 0; i < v; i++)
    {
        if (i == v1)
            continue;
        if (visited[i])
            continue;
        if (edges[v1][i])
        {
            visited[i] = true;
            path = getPath(edges, v, visited, i, v2);
            if (path.size())
            {
                path.push_back(v1);
                return path;
            }
        }
    }
    return path;
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
    visited[v1] = true;
    vector<long long> path = getPath(edges, v, visited, v1, v2);
    if (path.size())
    {
        for (long long i = 0; i < path.size(); i++)
        {
            cout << path[i] << " ";
        }
    }
    return 0;
}
