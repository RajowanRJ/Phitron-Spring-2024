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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void search(Node *head)
{
    Node *tmp = head;
    int pos, cnt = 0, flag = 0;
    cin >> pos;
    while (tmp != NULL)
    {
        if (pos == tmp->val)
        {
            flag++;
            break;
        }
        tmp = tmp->next;
        cnt++;
    }
    (flag == 0) ? cout << "-1\n" : cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }
        search(head);
    }
    return 0;
}