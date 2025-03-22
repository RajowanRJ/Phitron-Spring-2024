// Starting in the name of Almighty Allah
#include <bits/stdc++.h>

using namespace std;
#define ll long long
class Edge
{
public:
    ll a, b, c;
    Edge(ll a, ll b, ll c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> v;

int main()
{

    ll n, e;
    cin >> n >> e;

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back(Edge{a, b, c});
    }

    ll dis[n];

    for (int i = 0; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }

    long long int s;
    cin >> s;

    dis[s] = 0;

    bool flag = false;

    for (int i = 1; i <= n; i++)
    {
        for (Edge ed : v)
        {
            ll u = ed.a, v = ed.b, w = ed.c;
            if (dis[u] < LONG_MAX && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }
    for (Edge ed : v)
    {
        ll u = ed.a, v = ed.b, w = ed.c;
        if ((dis[u] < INT_MAX) and (dis[u] + w < dis[v]))
        {
            flag = true;
            break;
            dis[v] = dis[u] + w;
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (flag)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }

        if (dis[x] == LLONG_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[x] << endl;
        }
    }
    return 0;
}