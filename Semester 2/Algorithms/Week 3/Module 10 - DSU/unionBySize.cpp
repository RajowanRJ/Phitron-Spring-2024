// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> gsize;

void dsu_initialize(int n)
{
    par.resize(n, -1);
    gsize.resize(n, 1);
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;

    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_unionBySize(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (gsize[leaderA] > gsize[leaderB])
    {
        par[leaderB] = leaderA;
        gsize[leaderA] += gsize[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        gsize[leaderB] += gsize[leaderA];
    }
}

int main()
{
    int n = 7;
    dsu_initialize(n);

    dsu_unionBySize(0, 1);
    dsu_unionBySize(1, 2);
    dsu_unionBySize(2, 3);
    dsu_unionBySize(4, 5);
    dsu_unionBySize(5, 6);
    dsu_unionBySize(0, 5);

    cout << dsu_find(6) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << gsize[i] << endl;
    }

    return 0;
}