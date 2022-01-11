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
    int sol=0;
    int sumRootToLeaf(TreeNode* root,int num=0) {
        if(!root)return 0;
        num *= 2;
        num+=root->val;
        if(!root->left&&!root->right)sol+=num;
        sumRootToLeaf(root->left,num);
        sumRootToLeaf(root->right,num);
        return sol;
    }
};