// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;

    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<pair<int, int>>> adj(n);
    vector<Edge> edgeList;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
        {
            edgeList.push_back(Edge(i, it.first, it.second));
        }
    }

    for (Edge ed : edgeList)
    {
        cout << ed.u << " " << ed.v << " " << ed.c << endl;
    }

    return 0;
}