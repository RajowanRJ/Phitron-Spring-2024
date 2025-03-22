#include <bits/stdc++.h>
using namespace std;

bool can_go(vector<vector<char>> &g, int n, int m, int sx, int sy, int ex, int ey)
{
    vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = true;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        if (x == ex && y == ey)
        {
            return true;
        }

        for (const auto &d : dirs)
        {
            int nx = x + d.first;
            int ny = y + d.second;

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && g[nx][ny] != '#')
            {
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> g(n, vector<char>(m));
    int sx, sy, ex, ey;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
            if (g[i][j] == 'A')
            {
                sx = i;
                sy = j;
            }
            else if (g[i][j] == 'B')
            {
                ex = i;
                ey = j;
            }
        }
    }

    if (can_go(g, n, m, sx, sy, ex, ey))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
