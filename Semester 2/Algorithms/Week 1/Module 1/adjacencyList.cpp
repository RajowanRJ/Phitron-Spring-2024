// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> mat[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    for (int i = 0; i < mat[0].size(); i++)
    {
        cout << mat[0][i] << " ";
    }

    return 0;
}