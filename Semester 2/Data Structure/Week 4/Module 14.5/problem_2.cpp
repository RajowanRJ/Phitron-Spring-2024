// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;
    while (!st.empty())
    {
        if (n != m)
        {
            flag = false;
            break;
        }

        else if (st.top() != q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }

    (flag) ? cout << "YES" : cout << "NO";
    return 0;
}