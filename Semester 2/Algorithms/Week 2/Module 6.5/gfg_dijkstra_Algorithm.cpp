//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User Function Template
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

class Solution
{
public:
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src)
    {
        int N = adj.size();
        vector<int> dis(N, INT_MAX);

        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        pq.push({src, 0});
        dis[src] = 0;

        while (!pq.empty())
        {
            pair<int, int> parent = pq.top();
            pq.pop();

            int node = parent.first;
            int cost = parent.second;

            if (cost > dis[node])
                continue;

            for (pair<int, int> child : adj[node])
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
        return dis;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> adj(V);
        int i = 0;
        while (i++ < E)
        {
            int u, v, w;
            cin >> u >> v >> w;
            pair<int, int> t1 = {v, w}, t2 = {u, w};
            adj[u].push_back(t1);
            adj[v].push_back(t2);
        }
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(adj, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends