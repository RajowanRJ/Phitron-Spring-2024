// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int dfs(vector<vector<char>> &g, vector<vector<bool>> &v, int x, int y, int n, int m)
{
    int cnt = 0;
    vector<pair<int, int>> stk;
    stk.push_back({x, y});
    while (!stk.empty())
    {
        auto [cx, cy] = stk.back();
        stk.pop_back();

        if (cx < 0 || cx >= n || cy < 0 || cy >= m || v[cx][cy] || g[cx][cy] != '.')
        {
            continue;
        }

        v[cx][cy] = true;
        cnt++;

        for (auto &d : dirs)
        {
            int nx = cx + d.first;
            int ny = cy + d.second;
            stk.push_back({nx, ny});
        }
    }
    return cnt;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m));
    vector<vector<bool>> v(n, vector<bool>(m, false));
    vector<int> sizes;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> g[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (g[i][j] == '.' && !v[i][j])
            {
                int size = dfs(g, v, i, j, n, m);
                if (size > 0)
                {
                    sizes.push_back(size);
                }
            }
        }
    }

    sort(sizes.begin(), sizes.end());
    if (sizes.empty())
    {
        cout << "0" << endl;
    }

    else
    {
        for (int i = 0; i < sizes.size(); ++i)
        {
            if (i > 0)
            {
                cout << " ";
            }
            cout << sizes[i];
        }
        cout << endl;
    }

    return 0;
}
