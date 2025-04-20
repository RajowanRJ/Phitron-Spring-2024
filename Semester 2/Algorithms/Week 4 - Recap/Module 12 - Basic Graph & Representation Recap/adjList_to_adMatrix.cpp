// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

void convert(int n, vector<vector<int>> adj)
{
    vector<vector<int>> mat(n, vector<int>(n, 1e9));
    for (int i = 0; i < n; i++)
    {
        for (int child : adj[i])
        {
            mat[i][child] = 1;
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

    vector<vector<int>> adj(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    convert(n, adj);

    return 0;
}