// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> v(n, vector<int>(n, 1e9));
    for (int i = 0; i < n; i++)
        v[i][i] = 0;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a][b] = c;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 1e9)
                cout << "x" << " ";
            else
                cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
