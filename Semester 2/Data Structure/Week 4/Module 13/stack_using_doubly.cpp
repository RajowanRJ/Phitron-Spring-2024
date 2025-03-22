// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void push(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void pop(ListNode *&head, ListNode *&tail)
{
    if (head == NULL)
        return;
    if (tail->prev == NULL)
    {
        head == NULL;
        return;
    }
    ListNode *deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}

int top(ListNode *tail)
{
    return tail->val;
}

int size(ListNode *head)
{
    ListNode *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

bool empty(ListNode *head)
{
    return (head == NULL);
}

void print(ListNode *head)
{
    ListNode *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        push(head, tail, x);
    }

    while (!empty(head))
    {
        cout << top(head) << endl;
        pop(head, tail);
    }

    return 0;
}
