// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // Type 1
    // vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int val : v)
    // {
    //     cout << val << " ";
    // }

    // Type 2
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