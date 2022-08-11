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
    bool help(TreeNode* root, long mi, long ma){
        if(!root){
            return true;
        }
        // if(!root->left and !root->right){
        //     return true;
        // }
        if(root->val<=mi or root->val>=ma){
            return false;
        }
        return help(root->left, mi, root->val) and help(root->right, root->val, ma);
    }
    bool isValidBST(TreeNode* root) {
        
        
        return help(root, LONG_MIN, LONG_MAX);
    }
};