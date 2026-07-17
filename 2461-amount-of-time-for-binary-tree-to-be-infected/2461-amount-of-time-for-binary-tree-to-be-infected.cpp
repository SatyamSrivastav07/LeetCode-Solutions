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

    int res = 0;
    TreeNode* st = nullptr;
    int dfs(TreeNode* root, int start, int &dist) {

        if(root == nullptr) return 0;
        int rdist = -1, ldist = -1;

        int lh = dfs(root->left, start, ldist);
        int rh = dfs(root->right, start, rdist);
        
        if(root->val == start) {
            int t = max(lh, rh);
            res = max(res, t);
            dist = 0;
            return 0;
        }
        if(ldist != -1) {
            dist = ldist + 1;
            res = max(res, dist + rh);
        }
        else if(rdist != -1) {
            dist = rdist + 1;
            res = max(res, dist + lh);
        }
        return max(lh, rh) + 1;

    }

    int amountOfTime(TreeNode* root, int start) {

        int dist = -1;
        dfs(root, start, dist);
        return res;
    }
};