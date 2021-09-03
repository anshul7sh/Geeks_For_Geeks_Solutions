// Link To Problem:-
// https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1

vector<int> reverseLevelOrder(Node *node)
{

    queue<Node *> q;
    if (node)
        q.push(node);
    vector<vector<int>> res;

    int k = 0;

    while (!q.empty())
    {
        int n = q.size();
        res.push_back({});

        for (int i = 0; i < n; i++)
        {
            Node *top = q.front();
            q.pop();

            res[k].push_back(top->data);

            if (top->left)
                q.push(top->left);
            if (top->right)
                q.push(top->right);
        }

        k++;
    }

    vector<int> ans;

    for (int i = res.size() - 1; i >= 0; i--)
        for (auto x : res[i])
            ans.push_back(x);

    return ans;
}