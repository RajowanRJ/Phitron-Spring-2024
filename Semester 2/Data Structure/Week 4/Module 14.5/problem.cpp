// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;
    myStack st2;
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
        st2.push(x);
    }

    bool flag = true;
    while (!st.empty())
    {
        if (n != m)
        {
            flag = false;
            break;
        }
        else
        {
            if (st.top() != st2.top())
            {
                flag = false;
            }
            st.pop();
            st2.pop();
        }
    }

    (flag == true) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}