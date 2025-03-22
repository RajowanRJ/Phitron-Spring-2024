// Starting in the name of ALmighty Allah
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
        Node *p = q.front();
        q.pop();

        // Step 2
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // Step 3
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

vector<int> v;
void leaf(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
    leaf(root->left);
    leaf(root->right);
}
int main()
{
    Node *root = input_tree();
    leaf(root);
    sort(v.rbegin(), v.rend());
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}