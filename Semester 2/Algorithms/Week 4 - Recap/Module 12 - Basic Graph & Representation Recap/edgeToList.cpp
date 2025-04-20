// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;

int main()
{
    int n, e;
    cin >> n >> e;
    v.resize(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int x : v[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}