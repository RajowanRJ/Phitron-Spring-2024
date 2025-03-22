// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> v(N);
vector<bool> vis(N, false);
vector<int> parent(N, -1);
bool flag = false;

void dfs(int s)
{
    vis[s] = true;

    for (int child : v[s])
    {
        if (vis[child] && parent[s] != child)
        {
            flag = true;
        }
        if (!vis[child])
        {
            parent[child] = s;
            dfs(child);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }

    (flag) ? cout << "true" : cout << "false";

    return 0;
}