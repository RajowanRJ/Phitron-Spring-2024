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
        for (int i = 0; i < pos - 2; i++)
        {
            tmp = tmp->next;
        }
        deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
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
    a->next = b;

    delete_from_any(head, 0);
    print(head);
    return 0;
}