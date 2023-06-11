#include <bits/stdc++.h>
int offset[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
int bfs(vector<vector<int>> &arr, vector<vector<bool>> &visited, int n, int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});

    int count = 1;
    visited[i][j] = true;

    while (!q.empty())
    {
        auto curr = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int row = curr.first + offset[k][0];
            int col = curr.second + offset[k][1];
            if (row < n and col < n and row >= 0 and col >= 0 and !visited[row][col] and arr[row][col] == 1)
            {
                count++;
                q.push({row, col});
                visited[row][col] = true;
            }
        }
    }
    return count;
}

int getBiggestPieceSize(vector<vector<int>> &cake, int n)
{

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cake[i][j] == 1 and !visited[i][j])
            {
                ans = max(ans, bfs(cake, visited, n, i, j));
            }
        }
    }
    return ans;
}
