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
    bool rec(TreeNode* n, int depth, vector<int>& ref) {
        if(!n) return true;
        if(n->val % 2 == depth % 2) {
            return false;
        }

        if(depth < ref.size()) {
            if(depth % 2) { //vals even, st decreasing
                if(n->val >= ref[depth]) {
                    return false;
                }
            } else { //vals odd, st increasing
                if(n->val <= ref[depth]) {
                    return false;
                }
            }
            ref[depth] = n->val;
        } else {
            ref.push_back(n->val);
        }

        
        bool l = rec(n->left, depth + 1, ref);
        bool r = rec(n->right, depth + 1, ref);
        return l && r;
    }
    bool isEvenOddTree(TreeNode* root) {
        vector<int> ref(1);
        return rec(root, 0, ref);
    }
};