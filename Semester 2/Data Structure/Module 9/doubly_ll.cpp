// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Node 
{
public :
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

void print_normal (Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse (Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main ()
{
    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    Node *c = new Node (40);
    Node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    print_normal(head);
    print_reverse(tail);

    return 0;
}