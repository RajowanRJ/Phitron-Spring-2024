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

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. First value ber kore anbo
        Node *f = q.front();
        q.pop();
        // 2. Jabotiyo ja kaj ache koro
        cout << f->val << " ";

        // 3. Er Children ke push koro
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}

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

int main()
{
    Node *root = input_tree();
    level_order(root);

    return 0;
}