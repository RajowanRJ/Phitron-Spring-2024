// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int pr = q.front();
        q.pop();
        cout << pr << " ";

        for (int i = 0; i < v[pr].size(); i++)
        {
            int child = v[pr][i];
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
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

    int src;
    cin >> src;
    memset(visited, false, sizeof(visited));
    bfs(src);

    return 0;
}