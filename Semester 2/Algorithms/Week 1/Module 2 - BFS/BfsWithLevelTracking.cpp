// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];
int level[1005];

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    level[start] = 0;

    while (!q.empty())
    {
        int pr = q.front();
        q.pop();
        // cout << pr << " ";

        for (int child : v[pr])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[pr] + 1;
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

    int start;
    cin >> start;

    memset(level, -1, sizeof(level));
    memset(visited, false, sizeof(visited));
    bfs(start);

    for (int i = 0; i < n; i++)
    {
        cout << i << " " << level[i] << endl;
    }

    return 0;
}