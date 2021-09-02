// Link To Probelm:-
// https://practice.geeksforgeeks.org/problems/level-order-traversal/1

// Solution:-

class Solution
{
public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        queue<Node *> q;
        if (node)
            q.push(node);
        vector<int> res;

        while (!q.empty())
        {
            int n = q.size();

            for (int i = 0; i < n; i++)
            {
                Node *top = q.front();
                q.pop();

                res.push_back(top->data);

                if (top->left)
                    q.push(top->left);
                if (top->right)
                    q.push(top->right);
            }
        }

        return res;
    }
};