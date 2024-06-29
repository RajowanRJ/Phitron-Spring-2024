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
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl
         << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    return 0;
}