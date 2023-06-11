bool checker(vector<vector<char>> &arr, int n, int m, int i, int j, string s, bool **visited)
{

    if (s.length() == 0)
    {
        return true;
    }
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    int row_array[] = {i - 1, i, i + 1};
    int col_array[] = {j - 1, j, j + 1};
    for (int p = 0; p < 3; p++)
    {
        for (int q = 0; q < 3; q++)
        {
            if (row_array[p] == i && col_array[q] == j)
            {
                continue;
            }

            int row = row_array[p];
            int col = col_array[q];
            if (row < 0 || col < 0 || row >= n || col >= m)
            {
                continue;
            }
            if (arr[row][col] == s[0] && !visited[row][col])
            {
                visited[row][col] = true;
                bool checked = checker(arr, n, m, row, col, s.substr(1), visited);
                if (checked)
                {
                    return checked;
                }
                else
                {
                    visited[row][col] = false;
                }
            }
        }
    }
    return false;
}
bool hasPath(vector<vector<char>> &Graph, int n, int m)
{
    // Write your code here.
    string str = "CODINGNINJA";

    bool **visited = new bool *[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = new bool[m];
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Graph[i][j] == 'C')
            {
                if (checker(Graph, n, m, i, j, "ODINGNINJA", visited))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
