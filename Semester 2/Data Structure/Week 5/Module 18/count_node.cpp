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

int count_tree(Node *root)
{
    // Base case
    if (root == NULL)
        return 0;

    int l = count_tree(root->left);
    int r = count_tree(root->right);
    return l + r + 1;
}

int main()
{
    Node *root = input_tree();
    cout << count_tree(root) << endl;
    return 0;
}