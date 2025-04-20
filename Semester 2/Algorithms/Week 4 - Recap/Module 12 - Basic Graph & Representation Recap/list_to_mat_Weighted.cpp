// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

void convert(int n, vector<vector<pair<int, int>>> adj)
{
    vector<vector<int>> mat(n, vector<int>(n, 1e9));

    for (int i = 0; i < n; i++)
        mat[i][i] = 0;

    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> child : adj[i])
        {
            int cost = child.first;
            int node = child.second;
            mat[i][node] = cost;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1e9)
                cout << "0" << " ";
            else
                cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<pair<int, int>>> adj(n);

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }

    convert(n, adj);

    return 0;
}