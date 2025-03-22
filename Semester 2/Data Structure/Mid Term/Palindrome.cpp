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

void insert_tail (Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int palindrome (Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != NULL && j != NULL && i != j && i->next != j)
    {
        if(i->val != j->val)
        return 0;

        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val)
        return 0;
    else
    return 1;
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

int main ()
{
    Node *head = NULL;   
    Node *tail = NULL;   
    
    while (true)
    {
        int val;
        cin >> val;
        if(val == -1)
        break;
        else
        insert_tail(head, tail, val);
    }
    int x = palindrome(head, tail);
    (x == 1) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}