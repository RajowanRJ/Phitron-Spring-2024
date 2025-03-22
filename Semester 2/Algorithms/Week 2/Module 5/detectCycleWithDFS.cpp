// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int parent[N];
bool flag = false;

void dfs(int s)
{
    vis[s] = true;
    // cout << s << " ";

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
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }

    (flag) ? cout << "Cycle Detected" << endl : cout << "Cycle Not Detected" << endl;

    return 0;
}