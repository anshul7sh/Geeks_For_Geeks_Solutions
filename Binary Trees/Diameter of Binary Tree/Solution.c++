// Link To Problem:-
// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#

// Solution:-

class Solution
{
private:
    int res = 0;

public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node *root)
    {
        int left = dfs(root->left, 0);
        int right = dfs(root->right, 0);

        res = max(res, left + right + 1);

        return res;
    }

    int dfs(Node *root, int count)
    {
        if (root == NULL)
            return 0;

        int left = dfs(root->left, 0);
        int right = dfs(root->right, 0);

        res = max(res, left + right + 1);

        return max(left, right) + 1;
    }
};