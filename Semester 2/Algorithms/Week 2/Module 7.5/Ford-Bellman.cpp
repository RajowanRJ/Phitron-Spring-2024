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

vector<Edge> vec;
vector<int> dis;

int main()
{
    int n, m;
    cin >> n >> m;
    dis.resize(n + 1, INT_MAX);

    while (m--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        vec.push_back(Edge(u, v, c));
    }

    dis[1] = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (Edge ed : vec)
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

    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INT_MAX)
            cout << "30000" << " ";
        else
            cout << dis[i] << " ";
    }

    return 0;
}