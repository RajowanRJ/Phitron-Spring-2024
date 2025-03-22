// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *f = q.front();
        q.pop();

        // 2. Jabotiyo kaj
        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        f->left = left;
        f->right = right;

        // 3. eder children ke push koro
        if (f->left)
            q.push(left);
        if (f->right)
            q.push(right);
    }
    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;
    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();

        cout << pr->val << " ";

        if (pr->left)
            q.push(pr->left);
        if (pr->right)
            q.push(pr->right);
    }
}

void insert_in_bst(Node *&root, int x)
{
    if (root == NULL)
        root = new Node(x);

    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);

        else
            insert_in_bst(root->left, x);
    }

    if (x > root->val)
    {
        if (root->right == NULL)
            root->right = new Node(x);
        else
            insert_in_bst(root->right, x);
    }
}

int main()
{
    Node *root = input_tree();

    insert_in_bst(root, 20);
    insert_in_bst(root, 1);

    level_order(root);
    return 0;
}