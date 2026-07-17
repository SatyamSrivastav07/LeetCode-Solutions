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
    int ans = 0;

    void ansSum(TreeNode* root){
        if ( root == NULL ){
            return;
        }
        if ( root->val % 2 == 0 ){
            queue<TreeNode*> q;
            q.push(root);
            int level = 0;
            while (!q.empty()){
                int n = q.size();

                for ( int i = 0; i < n; i++ ){
                    TreeNode* temp = q.front();
                    q.pop();

                    if ( level == 2 ){
                        ans += temp->val;
                    }
                    if (temp->left) q.push(temp->left);
                    if (temp->right) q.push(temp->right);
                }
                if ( level == 2 ){
                    break;
                }
                level++;
            }
        }
        ansSum(root->left);
        ansSum(root->right);
    }


    int sumEvenGrandparent(TreeNode* root) {
        ansSum(root);
        return ans;


    }
};