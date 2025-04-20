// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));
    vector<pair<int, int>> edgeList;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            if (v[i][j] != 0)
            {
                edgeList.push_back({i, j});
            }
        }
    }

    for (pair<int, int> x : edgeList)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}