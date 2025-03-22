// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;

vector<bool> vis(N, false);
vector<int> vec[N];

void dfs(int src)
{
    cout << src << " ";
    vis[src] = true;

    for (int child : vec[src])
    {
        if (!vis[child])
            dfs(child);
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
    // dfs(src);
    int comp = 0;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            comp++;
        }
    }
    cout << endl
         << "Component : " << comp << endl;

    return 0;
}