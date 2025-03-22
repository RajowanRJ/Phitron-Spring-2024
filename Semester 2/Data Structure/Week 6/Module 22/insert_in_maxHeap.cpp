// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;

        while (true)
        {
            int parent_idx = (cur_idx - 1) / 2;
            if (v[cur_idx] > v[parent_idx])
                swap(v[cur_idx], v[parent_idx]);
            else
                break;
            cur_idx = parent_idx;
        }
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}