// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, m;
ll si, sj, di, dj;
bool flag = false;
vector<vector<char>> mat;
vector<vector<bool>> vis;
vector<vector<ll>> dis;
vector<vector<pair<ll, ll>>> parent;
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j]);
}

void bfs(int si, int sj)
{
    queue<pair<ll, ll>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {0, 0};

    while (!q.empty())
    {
        pair<ll, ll> par = q.front();
        q.pop();
        ll a = par.first;
        ll b = par.second;

        if (a == di && b == dj)
        {
            flag = true;
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            ll ci = a + d[i].first;
            ll cj = b + d[i].second;

            if (valid(ci, cj) && mat[ci][cj] != '#')
            {

                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {a, b};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    mat.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));
    dis.resize(n, vector<ll>(m, -1));
    parent.resize(n, vector<pair<ll, ll>>(m, {-1, -1}));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (mat[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    bfs(si, sj);

    pair<ll, ll> src = {si, sj};
    pair<ll, ll> des = {di, dj};

    if (flag)
    {
        while (src != des)
        {
            ll x = des.first;
            ll y = des.second;

            if (mat[x][y] != 'D' && mat[x][y] != 'R')

                mat[x][y] = 'X';
            des = parent[x][y];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}