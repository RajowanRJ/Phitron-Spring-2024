// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> gsize;
vector<int> level;

void dsu_initialize(int n)
{
    par.resize(n, -1);
    gsize.resize(n, 1);
    level.resize(n, 0);

    par[1] = 2;
    par[2] = 3;
    par[3] = 4;
    par[0] = 5;
    par[5] = 6;
    par[6] = 7;
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;

    return par[node] = dsu_find(par[node]);
}

void union_by_size(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);

    if (gsize[leader1] > gsize[leader2])
    {
        par[leader2] = leader1;
        gsize[leader1] += gsize[leader2];
    }

    else
    {
        par[leader1] = leader2;
        gsize[leader2] += gsize[leader1];
    }
}

void union_by_rank(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);

    if (level[leader1] > level[leader2])
        par[leader2] = leader1;

    else if (level[leader2] > level[leader1])
        par[leader1] = leader2;
    else
    {
        par[leader2] = leader1;
        level[leader1]++;
    }
}

int main()
{
    int n = 8;
    dsu_initialize(n);

    union_by_rank(1, 5);
    cout << level[5] << endl;

    return 0;
}