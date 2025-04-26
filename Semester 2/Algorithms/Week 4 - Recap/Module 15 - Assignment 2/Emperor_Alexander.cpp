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

class dsu
{
public:
    vector<ll> par;
    vector<ll> Size;
    vector<ll> rank;

    dsu(ll n)
    {
        par.resize(n + 1, -1);
        Size.resize(n + 1, 1);
        rank.resize(n + 1, 0);
    }

    ll find(ll node)
    {
        if (par[node] == -1)
            return node;
        return par[node] = find(par[node]);
    }

    void union_by_size(ll node1, ll node2)
    {
        ll a = find(node1);
        ll b = find(node2);

        if (a == b)
            return;

        if (Size[a] < Size[b])
        {
            par[a] = b;
            Size[b] += Size[a];
        }
        else
        {
            par[b] = a;
            Size[a] += Size[b];
        }
    }

    void union_by_rank(ll node1, ll node2)
    {
        ll a = find(node1);
        ll b = find(node2);

        if (a == b)
            return;

        if (rank[a] > rank[b])
            par[b] = a;
        else if (rank[b] > rank[a])
            par[a] = b;
        else
        {
            par[b] = a;
            rank[a]++;
        }
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    ll n, e;
    cin >> n >> e;

    dsu d(n);
    vector<Edge> edgeList;

    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
    ll totalCost = 0, nodeCount = 0;
    for (Edge ed : edgeList)
    {
        ll a = d.find(ed.u);
        ll b = d.find(ed.v);

        if (a == b)
        {
            nodeCount++;
            continue;
        }

        d.union_by_rank(ed.u, ed.v);
        totalCost += ed.w;
    }

    ll grp = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (d.par[i] == -1)
            grp++;
    }

    if (grp > 1)
        cout << "Not Possible" << endl;
    else
        cout << nodeCount << " " << totalCost << endl;

    return 0;
}