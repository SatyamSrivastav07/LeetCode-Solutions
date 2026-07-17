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
    void leaf(TreeNode* root, vector<int> &a){
        if(!root) return;
        if(!root->left && !root->right) a.push_back(root->val);
        leaf(root->left, a);
        leaf(root->right, a);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l1, l2;
        leaf(root1, l1);leaf(root2, l2);
        if(l1.size() != l2.size()) return false;
        for(int i = 0;i < l1.size();i++) 
            if(l1[i] != l2[i]) return false;
        return true;
    }
};