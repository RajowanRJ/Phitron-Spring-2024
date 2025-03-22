// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<vector<pair<int, int>>> v(N);
vector<int> dis(N, INT_MAX);

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return (a.second > b.second);
    }
};

void dijkstra(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({s, 0});
    dis[s] = 0;

    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();

        int node = par.first;
        int cost = par.second;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
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