// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<int> par;

void dsu_initialize()
{
    par[0] = 1;
    par[1] = 2;
    par[2] = 3;
    par[5] = 4;
    par[6] = 5;
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);
    par[leader1] = leader2;
}

int main()
{
    int n = 7;
    par.resize(n, -1);

    dsu_initialize();

    dsu_union(4, 6);

    cout << dsu_find(4) << endl;

    return 0;
}