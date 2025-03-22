// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<long long, int>>> v;
vector<int> dis;

void dijkstra(int src)
{
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        int node = pq.top().second;
        long long cost = pq.top().first;
        pq.pop();

        if (cost > dis[node])
            continue;

        for (auto child : v[node])
        {
            int childNode = child.first;
            long long childCost = child.second;

            if (dis[node] + childCost < dis[childNode])
            {
                dis[childNode] = dis[node] + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    v.resize(n + 1);
    dis.resize(n + 1, INT_MAX);

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    int src;
    cin >> src;
    dijkstra(src);

    int t;
    cin >> t;
    while (t--)
    {
        int d, dw;
        cin >> d >> dw;

        if (dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}