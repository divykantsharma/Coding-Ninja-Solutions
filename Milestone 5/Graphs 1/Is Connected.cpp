#include <iostream>
using namespace std;
#include <queue>

bool checkIsConnected(int **edges, int n, int start)
{
    queue<int> vertices;
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    vertices.push(start);
    visited[start] = true;

    while (!vertices.empty())
    {
        int current = vertices.front();
        vertices.pop();
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && edges[current][i] == 1 && i != current)
            {
                vertices.push(i);
                visited[i] = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int start, end;
        cin >> start >> end;
        edges[start][end] = 1;
        edges[end][start] = 1;
    }

    if (checkIsConnected(edges, n, 0))
    { // its enough if you check with single vertex
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
