// LeetCode: Diameter of Binary Tree
// Time Complexity: O(N)
// Space Complexity: O(H)

class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        diameter = max(diameter, lh + rh);

        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
