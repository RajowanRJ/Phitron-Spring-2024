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

void insert_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;

    if (tmp == NULL)
    {
        head = newNode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_from_any(Node *&head, int pos)
{
    Node *deleteNode;

    if (pos == 0)
    {
        deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    else
    {
        Node *tmp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            if (tmp->next == NULL)
                break;
            tmp = tmp->next;
        }
        if (tmp->next == NULL)
        {
            return;
        }
        deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
}

int size(Node *head)
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

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, val;
        cin >> x >> val;
        if (x == 0)
        {
            insert_head(head, val);
            print(head);
        }

        else if (x == 1)
        {
            insert_tail(head, val);
            print(head);
        }
        else if (x == 2)
        {
            int s = size(head);
            if (val < s)
                delete_from_any(head, val);
            print(head);
        }
    }
    return 0;
}