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

vector<Edge> EdgeList;
vector<int> dis;

int main()
{
    int n, e;
    cin >> n >> e;
    dis.resize(n, INT_MAX);

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    dis[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}