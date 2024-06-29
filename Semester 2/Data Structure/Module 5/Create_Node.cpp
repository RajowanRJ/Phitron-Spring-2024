// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;
    a.val = 10;
    a.next = &b;
    b.val = 20;
    b.next = NULL;

    cout << a.val << " " << a.next->val << endl;
    return 0;
}