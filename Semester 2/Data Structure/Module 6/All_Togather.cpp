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

void insert_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    if (tmp == NULL)
    {
        head = newNode;
        return;
    }

    else
    {

        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    cout << endl;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << endl
         << "Your Linked List : ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void insert_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
        head = newNode;
    else
    {
        Node *tmp = head;
        head = newNode;
        head->next = tmp;
    }
}

void insert_any_pos(Node *&head, int v, int pos)
{
    Node *newNode = new Node(v);

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int x;
        cout << "1. Print Linked List." << endl;
        cout << "2. Insert Value at End." << endl;
        cout << "3. Insert value at Head." << endl;
        cout << "4. Insert value at any Position." << endl;
        cout << "5. Terminate." << endl;
        cin >> x;

        if (x == 1)
        {
            print_linked_list(head);
        }
        else if (x == 2)
        {
            int val;
            cout << "Enter a Value : ";
            cin >> val;
            insert_tail(head, val);
        }
        else if (x == 3)
        {
            int val;
            cout << "Enter a value : ";
            cin >> val;
            insert_head(head, val);
        }
        else if (x == 4)
        {
            int pos, val;
            cout << endl
                 << "Enter position and value : ";
            cin >> pos >> val;
            insert_any_pos(head, val, pos);
            cout << endl
                 << endl;
        }
        else if (x == 5)
        {
            break;
        }
    }

    return 0;
}