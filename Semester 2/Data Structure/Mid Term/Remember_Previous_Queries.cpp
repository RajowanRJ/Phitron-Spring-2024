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

void insert_head (Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node (val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail (Node *&head,Node *&tail, int val)
{ 
    Node *newNode = new Node (val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
   
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void delete_pos(Node *&head, Node *&tail, int pos)
{
    if (head == NULL) 
        return; 
    Node* tmp = head;
    for (int i = 0; i < pos - 1 && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }
    if (tmp == NULL || tmp->next == NULL) 
        return;
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    
    if (tmp->next != NULL)
        tmp->next->prev = tmp;
    else 
        tail = tmp;
    delete deleteNode;
}

void delete_tail (Node *&head, Node *&tail)
{
    if (tail == NULL) return;
    if (tail->prev == NULL)
    {
        delete tail;
        head = NULL;
        tail = NULL;
        return;
    }
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

void delete_head (Node *&head, Node *&tail)
{
    if (head == NULL) return;
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}

void printL (Node *head)
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

int main ()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        
        if (x == 0)
            insert_head (head, tail, v);
        else if (x == 1)
            insert_at_tail(head, tail, v);
        else if (x == 2)
        {
            if (v == 0)
                delete_head(head, tail);
            else if (v == size(head) - 1)
                delete_tail(head, tail);
            else if (v < size(head))
                delete_pos(head, tail, v);
        }
        printL(head);
        printR(tail);
    }
}