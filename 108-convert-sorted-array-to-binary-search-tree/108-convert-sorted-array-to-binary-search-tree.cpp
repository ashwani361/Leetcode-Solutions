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
    TreeNode* sortedArrayToBST(vector<int>& v) {
        int n = v.size();
        if(n==0){
            return NULL;
        }
        if(n==1){
            return new TreeNode(v[0]);
        }
        
        int m = n/2;
        TreeNode* root = new TreeNode(v[m]);
        
        vector<int>lvec(v.begin(), v.begin()+m);
        vector<int>rvec(v.begin()+m+1, v.end());
        
        root->left = sortedArrayToBST(lvec);
        root->right = sortedArrayToBST(rvec);
        return root;
    }
};