// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;

    Edge(int u, int v, int w)
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

vector<int> par;
vector<int> Size;
vector<int> level;

void dsu_initialize(int n)
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

void union_by_size(int node1, int node2)
{
    int a = find(node1);
    int b = find(node2);

    if (a > b)
    {
        par[b] = a;
        Size[a] += Size[b];
    }
    else
    {
        par[a] = b;
        Size[b] += Size[a];
    }
}

void union_by_rank(int node1, int node2)
{
    int a = find(node1);
    int b = find(node2);

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
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
    int totalCost = 0;

    for (Edge ed : edgeList)
    {
        int U = find(ed.u);
        int V = find(ed.v);

        if (U == V)
        {
            continue;
        }
        else
        {
            union_by_rank(ed.u, ed.v);
            totalCost += ed.w;
        }
    }

    cout << totalCost << endl;
    return 0;
}