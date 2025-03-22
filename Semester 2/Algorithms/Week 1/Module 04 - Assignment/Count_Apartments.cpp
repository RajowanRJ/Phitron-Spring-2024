// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<char>> v;
vector<vector<bool>> vis;

// Right Left Top Bottom
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int a = par.first;
        int b = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && v[ci][cj] == '.')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int countApartments()
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && v[i][j] == '.')
            {
                cnt++;
                bfs(i, j);
            }
        }
    }
    return cnt;
}

int main()
{
    cin >> n >> m;
    v.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    cout << countApartments();

    return 0;
}