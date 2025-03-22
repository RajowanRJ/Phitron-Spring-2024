// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Node 
{
public :
    string val;
    Node *prev;
    Node *next;

    Node (string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_tail (Node *&head, Node *&tail, string val)
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

void visit(Node *&now, Node *head, string address)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == address)
        {
            now = temp;
            cout << now->val << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}

void next(Node *&now)
{
    if (now->next != NULL)
    {
        now = now->next;
        cout << now->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node *&now)
{
    if (now->prev != NULL)
    {
        now = now->prev;
        cout << now->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main ()
{
    Node *head = NULL;   
    Node *tail = NULL;   
    
    while (true)
    {
        string val;
        cin >> val;
        if(val == "end")
        break;
        else
        insert_tail(head, tail, val);
    }
    
    int q;
    string opt;
    Node *now = head;

    cin >> q;
    while (q--)
    {
        cin >> opt;
        if (opt == "visit")
        {
            string site;
            cin >> site;
            visit (now, head, site);
        }
        else if (opt == "next")
        {
            next(now);
        }
        else if (opt == "prev")
        {
            prev(now);
        }
    }
    return 0;
}