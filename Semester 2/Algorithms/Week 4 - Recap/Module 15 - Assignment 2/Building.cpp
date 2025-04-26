// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Edge
{
public:
    ll u, v, w;

    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

vector<ll> par;
vector<ll> Size;
vector<ll> level;

void dsu_initialize(ll n)
{
    par.resize(n + 1, -1);
    Size.resize(n + 1, 1);
    level.resize(n + 1, 0);
}

int find(int node)
{
    if (par[node] == -1)
        return node;

    return par[node] = find(par[node]);
}

void union_by_rank(int node1, int node2)
{
    int a = find(node1);
    int b = find(node2);

    if (a == b)
        return;

    if (level[a] > level[b])
        par[b] = a;

    else if (level[b] > level[a])
        par[a] = b;

    else
    {
        par[b] = a;
        level[a] += level[b];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    dsu_initialize(n);

    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
    ll weight = 0;
    ll edgeCount = 0;
    for (Edge ed : edgeList)
    {
        ll a = find(ed.u);
        ll b = find(ed.v);

        if (a == b)
            continue;
        else
        {
            union_by_rank(ed.u, ed.v);
            weight += ed.w;
            edgeCount++;
        }
        if (edgeCount == n - 1)
            break;
    }

    if (edgeCount == n - 1)
        cout << weight << endl;
    else
        cout << "-1" << endl;

    return 0;
}
