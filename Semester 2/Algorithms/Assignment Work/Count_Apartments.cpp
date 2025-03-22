// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void dfs(vector<vector<char>> &g, vector<vector<bool>> &v, int x, int y, int n, int m)
{
    v[x][y] = true;

    for (auto &d : dirs)
    {
        int nx = x + d.first;
        int ny = y + d.second;

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !v[nx][ny] && g[nx][ny] == '.')
        {
            dfs(g, v, nx, ny, n, m);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> g(n, vector<char>(m));
    vector<vector<bool>> v(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> g[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (g[i][j] == '.' && !v[i][j])
            {
                dfs(g, v, i, j, n, m);
                ++cnt;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
