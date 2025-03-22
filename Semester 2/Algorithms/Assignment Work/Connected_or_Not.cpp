// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_matrix[n];

    for (int i = 0; i < n; ++i)
    {
        adj_matrix[i].assign(n, 0);
    }

    for (int i = 0; i < e; ++i)
    {
        int x, y;
        cin >> x >> y;
        adj_matrix[x][y] = 1;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        (a == b || adj_matrix[a][b] == 1) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
