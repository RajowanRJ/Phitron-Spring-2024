// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> v;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    for (pair<int, int> x : v)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}