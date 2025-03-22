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