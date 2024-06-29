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

    v.clear();
    (v.empty() == 1) ? cout << "Is Empty\n" : cout << "Not Empty\n";

    return 0;
}