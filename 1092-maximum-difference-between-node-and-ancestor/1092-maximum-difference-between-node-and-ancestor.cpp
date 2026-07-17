/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root, int max, int min) {
        if (root == nullptr)
            return max - min;

        max = std::max(max, root->val);
        min = std::min(min, root->val);

        return std::max(helper(root->left, max, min),
                        helper(root->right, max, min));
    }
    int maxAncestorDiff(TreeNode* root) {
        return helper(root, root->val, root->val);
    }
};
