// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int a[n][n];
    memset(a, 0, sizeof(a));

    int x, y;.

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        for (int j = 0; j < n; j++)
        {
            a[x][y] = 1;
            a[y][x] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}