// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        sort(v[x].begin(), v[x].end(), greater<int>());

        if (v[x].empty())
            cout << "-1 ";
        else
        {
            for (int it : v[x])
            {
                cout << it << " ";
            }
        }
        cout << endl;
    }

    return 0;
}