// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> par(N, -1);

void dsu_initialize(int n)
{
    par[1] = 3;
    par[2] = 1;
    par[3] = 0;
}

int find(int node)
{
    if (par[node] == -1)
        return node;

    par[node] = find(par[node]);
    return find(par[node]);
}

int main()
{
    int n = 4;

    dsu_initialize(n);
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << find(i) << endl;
    }

    return 0;
}