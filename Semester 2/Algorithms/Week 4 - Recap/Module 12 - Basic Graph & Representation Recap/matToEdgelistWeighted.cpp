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

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    vector<Edge> edgeList;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            if (v[i][j] != 0)
            {
                edgeList.push_back(Edge(i, j, v[i][j]));
            }
        }
    }

    for (Edge ed : edgeList)
    {
        cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }

    return 0;
}