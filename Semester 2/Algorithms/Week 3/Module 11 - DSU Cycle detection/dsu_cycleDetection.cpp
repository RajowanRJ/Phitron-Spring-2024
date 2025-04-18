// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> level;

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

    if (level[a] > level[b])
    {
        par[b] = a;
    }
    else if (level[b] > level[a])
    {
        par[a] = par[b];
    }
    else
    {
        par[a] = b;
        level[b] += level[a];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    par.resize(n, -1);
    level.resize(n, 0);

    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int x = find(a);
        int y = find(b);

        if (x == y)
            cycle = true;
        else
        {
            union_by_rank(a, b);
        }
    }

    (cycle) ? cout << "Cycle Found" << endl : cout << "Cycle not Found" << endl;

    return 0;
}