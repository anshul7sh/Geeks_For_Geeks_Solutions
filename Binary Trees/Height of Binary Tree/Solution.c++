// Link To Problem:-
// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#

// Solution:-

class Solution
{
private:
    int maxHeight = 0;

public:
    //Function to find the height of a binary tree.
    int height(struct Node *node)
    {
        dfs(node, 1);

        return maxHeight;
    }

    void dfs(Node *root, int depth)
    {
        if (root == NULL)
            return;

        maxHeight = max(maxHeight, depth);

        dfs(root->left, depth + 1);
        dfs(root->right, depth + 1);

        return;
    }
};