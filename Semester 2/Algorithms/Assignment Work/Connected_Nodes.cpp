// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<set<int>> graph(n);

    for (int i = 0; i < e; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].insert(v);
        graph[v].insert(u);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int node;
        cin >> node;
        auto &cn = graph[node];

        if (cn.empty())
        {
            cout << "-1" << endl;
        }

        else
        {
            vector<int> sn(cn.begin(), cn.end());

            sort(sn.begin(), sn.end(), greater<int>());

            for (int j = 0; j < sn.size(); j++)
            {
                if (j > 0)
                    cout << " ";
                cout << sn[j];
            }
            cout << endl;
        }
    }

    return 0;
}
