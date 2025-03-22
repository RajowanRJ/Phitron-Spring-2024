// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll INF = 1e18;

int main()
{
    ll n, e;
    cin >> n >> e;
    vector<vector<ll>> adj(n + 1, vector<ll>(n + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = INF;
        }
    }

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        if (adj[a][b] > w)
            adj[a][b] = w;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        if (adj[x][y] != INF)
            cout << adj[x][y] << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}