// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> v, int n)
{
    sort(v.begin(), v.end());
    auto duplicate = unique(v.begin(), v.end());
    v.erase(duplicate, v.end());

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v, n);
    }
    return 0;
}
