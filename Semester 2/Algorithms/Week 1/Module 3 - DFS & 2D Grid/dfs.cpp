// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> vec[N];
vector<bool> vis(N, false);

void dfs(int src)
{
    cout << src << " ";
    vis[src] = true;

    for (int child : vec[src])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    int src;
    cin >> src;
    dfs(src);

    return 0;
}