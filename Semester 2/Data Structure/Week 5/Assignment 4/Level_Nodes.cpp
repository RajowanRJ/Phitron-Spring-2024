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
        // Step 1
        Node *f = q.front();
        q.pop();

        // Step 2
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

        // Step 3
        if (f->left)
            q.push(left);
        if (f->right)
            q.push(right);
    }
    return root;
}

void level_nodes(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool level_found = false;

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (level == x)
        {
            cout << node->val << " ";
            level_found = true;
        }

        if (node->left)
            q.push({node->left, level + 1});

        if (node->right)
            q.push({node->right, level + 1});
    }
    if (!level_found)
        cout << "Invalid" << endl;
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;

    level_nodes(root, x);
    return 0;
}