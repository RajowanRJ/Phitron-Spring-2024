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

void print_left_outer(Node *root)
{
    // Base Case
    if (root == NULL)
        return;

    if (root->left)
    {
        print_left_outer(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right)
    {
        print_left_outer(root->right);
        cout << root->right->val << " ";
    }
}

void print_right_outer(Node *root)
{
    if (root == NULL)
        return;

    if (root->right)
    {
        cout << root->right->val << " ";
        print_right_outer(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        print_right_outer(root->left);
    }
}

int main()
{
    Node *root = input_tree();
    // cout << root->val << " ";
    if (root->left == NULL)
    {
        cout << root->val << " ";
        print_right_outer(root);
    }

    else if (root->right == NULL)
    {
        print_left_outer(root);
        cout << root->val << " ";
    }

    else if (root->left != NULL && root->right != NULL)
    {
        print_left_outer(root);
        cout << root->val << " ";
        print_right_outer(root);
    }

    return 0;
}