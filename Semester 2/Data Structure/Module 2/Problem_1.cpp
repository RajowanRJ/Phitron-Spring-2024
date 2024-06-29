// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        int x = n;
        v.push_back(x - (x - i));
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}