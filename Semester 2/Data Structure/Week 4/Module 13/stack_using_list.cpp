// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class myStack
{
public :
    list <int> l;

    void push (int val)
    {
        l.push_back(val);
    }

    void pop ()
    {
        l.pop_back();
    }

    int top ()
    {
        return l.back();
    }

    int size ()
    {
        return l.size();
    }

    int empty ()
    {
        return (l.size() == 0);
    }
};

int main ()
{
    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}