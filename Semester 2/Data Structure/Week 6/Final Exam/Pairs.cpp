// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    cmp obj;
    sort(a.begin(), a.end(), obj);

    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
