// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }
    v.resize(20, 0);

    // for (int val : v)
    // {
    //     cout << val << " ";
    // }

    v.resize(10, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // for (int val : v)
    // {
    //     cout << val << " ";
    // }

    return 0;
}