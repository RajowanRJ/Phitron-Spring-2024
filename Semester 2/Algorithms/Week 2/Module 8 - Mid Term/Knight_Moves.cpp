// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dir_array = {{2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}};
vector<vector<int>> board;
int n, m;
int ki, kj, qi, qj;
vector<vector<bool>> vis;
vector<vector<int>> dis;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j])
        return false;
    return true;
}

void bfs()
{
    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    dis[ki][kj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci = par.first + dir_array[i].first;
            int cj = par.second + dir_array[i].second;

            if (valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> ki >> kj >> qi >> qj;

        //v.resize kaj koreni tai protibar new size assign korechi
        board.assign(n, vector<int>(m));
        vis.assign(n, vector<bool>(m, false));
        dis.assign(n, vector<int>(m, -1));

        bfs();
        cout << dis[qi][qj] << endl;
    }

    return 0;
}