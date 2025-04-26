// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> level;

void dsu_initialize(int n)
{
    par.assign(n + 1, -1);
    level.assign(n + 1, 0);
}

int find(int node)
{
    if (par[node] == -1)
        return node;

    return par[node] = find(par[node]);
}

void unite(int node1, int node2)
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
    dsu_initialize(n);

    int cnt = 0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int x = find(a);
        int y = find(b);

        if (x == y)
        {
            cnt++;
        }
        else
        {
            unite(a, b);
        }
    }

    if (cnt != 0)
        cout << cnt << endl;
    else
        cout << "0" << endl;

    return 0;
}