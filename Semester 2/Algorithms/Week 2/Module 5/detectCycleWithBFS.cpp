// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int parent[N];
bool cycle = false;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << " ";

        for (int child : v[par])
        {
            if (vis[child] && parent[par] != child)
            {
                cycle = true;
            }

            if (!vis[child])
            {
                q.push(child);
                parent[child] = par;
                vis[child] = true;
            }
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
        {
            bfs(i);
        }
    }

    (cycle) ? cout << "Cycle Detected" << endl : cout << "Cycle Not Detected" << endl;

    return 0;
}