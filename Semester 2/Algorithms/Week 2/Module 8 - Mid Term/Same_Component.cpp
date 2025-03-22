// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int n, m;
int si, sj, di, dj;
vector<vector<char>> v;
vector<vector<bool>> vis;

// Top, Bottom, Left, Right
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool flag = false;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j])
        return false;
    return true;
}

void dfs(int si, int sj)
{
    if (si == di && sj == dj)
    {
        flag = true;
        return;
    }

    if (vis[si][sj])
        return;
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && v[ci][cj] != '-')
        {
            dfs(ci, cj);
        }
    }
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

    cin >> si >> sj >> di >> dj;

    dfs(si, sj);

    (flag) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
