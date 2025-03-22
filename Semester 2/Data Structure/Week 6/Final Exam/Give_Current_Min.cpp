#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    multiset<int> min;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        min.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int in;
        cin >> in;
        if (in == 0)
        {
            int value;
            cin >> value;
            min.insert(value);
            cout << *min.begin() << endl;
        }
        else if (in == 1)
        {
            if (!min.empty())
            {
                cout << *min.begin() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (in == 2)
        {
            if (!min.empty())
            {
                min.erase(min.begin());
                if (!min.empty())
                {
                    cout << *min.begin() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
