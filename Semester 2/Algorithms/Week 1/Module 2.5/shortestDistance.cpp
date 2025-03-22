// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>> &vec, int src, int des)
{
    int size = vec.size();

    vector<bool> vis(size, false);
    vector<int> level(size, -1);

    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : vec[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;

                if (child == des)
                    return level[child];
            }
        }
    }

    return -1;
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int>> vec(v);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int src, des;
        cin >> src >> des;

        int x = bfs(vec, src, des);

        if (src == des)
            cout << "0" << endl;
        else if (x != -1)
            cout << x << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}