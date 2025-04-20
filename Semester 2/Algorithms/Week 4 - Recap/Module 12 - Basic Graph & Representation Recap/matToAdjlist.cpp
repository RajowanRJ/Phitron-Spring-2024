// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            mat[i][j] = x;
        }
    }

    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != 0)
                v[i].push_back(j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int x : v[i])
        {
            cout << i << " " << x << endl;
        }
    }

    return 0;
}