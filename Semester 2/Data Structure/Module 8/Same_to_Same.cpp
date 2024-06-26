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

int size(Node *head)
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
void cmp(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    int size1 = size(tmp1);
    int size2 = size(tmp2);
    bool flag = true;

    if (size1 != size2)
        flag = false;
    else
    {
        while (tmp1 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = false;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    (flag == true) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1;
    int val2;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(head1, tail1, val1);
    }
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2, tail2, val2);
    }
    cmp(head1, head2);

    return 0;
}