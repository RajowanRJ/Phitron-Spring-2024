// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }

    int x;
    cin >> x;

    v.insert(v.begin() + x, b.begin(), b.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}