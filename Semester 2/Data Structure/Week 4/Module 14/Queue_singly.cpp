// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        ListNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
            tail = NULL;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return (sz == 0);
    }
};

int main()
{
    myQueue q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}