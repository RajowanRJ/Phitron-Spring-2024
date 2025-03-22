// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
bool pathVisit[N];
bool flag = false;

void dfs(int s)
{
    vis[s] = true;
    pathVisit[s] = true;
    for (int child : v[s])
    {
        if (pathVisit[child])
        {
            flag = true;
        }

        if (!vis[child])
        {
            dfs(child);
        }
    }
    pathVisit[s] = false;
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
    }

    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }

    (flag) ? cout << "Cycle Detected\n" : cout << "Cycle Not Detected\n";
    return 0;
}