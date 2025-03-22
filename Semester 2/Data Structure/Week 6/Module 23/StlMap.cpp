// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        mp.insert({s, x});
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}