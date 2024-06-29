// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int length(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_even(Node *head, int l)
{
    Node *tmp = head;
    for (int i = 0; i < l - 1; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->next->val << endl;
}

void print_odd(Node *head, int l)
{
    Node *tmp = head;
    for (int i = 0; i < l - 1; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val << " " << tmp->next->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int l = length(head) / 2;
    if (l % 2 == 0)
        print_even(head, l);
    else
        print_odd(head, l);
    return 0;
}