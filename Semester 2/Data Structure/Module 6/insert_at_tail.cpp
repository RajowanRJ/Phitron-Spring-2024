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

void insert_at_tail(Node *&head, int v)
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

void print(Node *head)
{
    Node *tmp = head;
    cout << endl
         << "Linked List : ";
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
    while (true)
    {
        cout << "Press 1 to Insert a value : ";
        cout << endl
             << "Press 2 to Print Linked List : ";
        cout << endl
             << "Press 3 to Terminate : ";
        int x;
        cin >> x;
        if (x == 1)
        {
            int val;
            cout << "Enter a value : ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (x == 2)
        {
            print(head);
        }
        else if (x == 3)
        {
            break;
        }
    }
}