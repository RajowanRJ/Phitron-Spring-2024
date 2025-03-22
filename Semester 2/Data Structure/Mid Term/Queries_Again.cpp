// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int val;
    Node *prev;
    Node *next;

    Node (int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_any_pos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL || tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    if (pos == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (tmp->next == NULL) break;
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    if (tmp->next != NULL)
        newNode->next->prev = newNode;
    else
        tail = newNode;
    
    newNode->prev = tmp;
    tmp->next = newNode;
}

int size (Node *head)
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

void printL(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void printR (Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int v, p;
        cin >> p >> v;
        if (p > size(head))
        cout << "Invalid" << endl;
        else
        {
            insert_any_pos(head, tail, p, v);
            printL(head);
            printR(tail);
        }
    }
}