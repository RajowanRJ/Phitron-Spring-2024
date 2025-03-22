// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<char>> v;
vector<vector<bool>> vis;

// Top, Bottom, Left, Right
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m || vis[ci][cj])
        return false;
    return true;
}

int bfs(int si, int sj)
{
    int cnt = 0;
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        cnt++;
        int a = par.first;
        int b = par.second;

        for (int i = 0; i < 4; i++)
        {

            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if (valid(ci, cj) && v[ci][cj] == '.')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
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

    vector<int> asc;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && v[i][j] == '.')
            {
                asc.push_back(bfs(i, j));
            }
        }
    }

    sort(asc.begin(), asc.end());
    if (asc.empty())
    {
        cout << "0" << " ";
    }
    else
    {
        for (int x : asc)
        {
            cout << x << " ";
        }
    }

    return 0;
}