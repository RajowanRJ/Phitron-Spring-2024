// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void delete_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;
    if (tail->prev == NULL)
    {
        head = NULL;
        return;
    }
    Node *deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    Node *tail = b;

    delete_tail(head, tail);
    delete_tail(head, tail);
    delete_tail(head, tail);
    print(head);

    return 0;
}