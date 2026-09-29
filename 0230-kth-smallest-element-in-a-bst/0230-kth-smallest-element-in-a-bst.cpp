/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorderdfs(TreeNode* root, vector<int>&order){
        if(root == nullptr) return;
        inorderdfs(root->left, order);
        order.push_back(root->val);
        inorderdfs(root->right, order);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>order;
        inorderdfs(root, order);

        return order[k-1];
    }
};