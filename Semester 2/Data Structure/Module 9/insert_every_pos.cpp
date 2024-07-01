// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Node 
{
public :
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

void insert_any_pos (Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node (val);
    if(head == NULL || tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if (tail->next == NULL)
    {
        tail->next = newNode;
        tail = newNode;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->next->prev = newNode;
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

void print (Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main ()
{
    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    Node *tail = b;

    int v, p;
    cin >> p >> v;
    if (p > size(head))
    cout << "Warning : Invalid Index" << endl;
    else
    insert_any_pos(head, tail, p, v);
    print(head);
    return 0;
}