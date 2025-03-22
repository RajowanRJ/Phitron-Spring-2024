// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b || mat[a][b] == 1)
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