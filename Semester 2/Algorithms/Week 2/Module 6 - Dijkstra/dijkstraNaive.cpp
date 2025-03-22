// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<vector<pair<int, int>>> v(N);
vector<int> dis(N, INT_MAX);

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int node = par.first;
        int cost = par.second;

        for (pair<int, int> child : v[node])
        {
            int cnode = child.first;
            int ccost = child.second;

            if (cost + ccost < dis[cnode])
            {
                dis[cnode] = cost + ccost;
                q.push({cnode, dis[cnode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}