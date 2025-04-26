// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int n, m;
vector<vector<char>> mat;
vector<vector<bool>> vis;
int cnt;
ll minCnt = LONG_MAX;
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j]);
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && mat[ci][cj] == '.')
            dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;
    mat.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '.' && !vis[i][j])
            {
                found = true;
                cnt = 0;
                dfs(i, j);
                if (minCnt > cnt)
                    minCnt = cnt;
            }
        }
    }
    if (found)
        cout << minCnt << endl;
    else
        cout << "-1" << endl;

    return 0;
}