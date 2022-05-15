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
    int ans,mx;

	void getDfs(TreeNode *r,int d) {
		if(!r) return;
		if(d==mx) ans+= r->val;
		else if(d>mx) mx=d,ans= r->val;
		getDfs(r->left,d+1);
		getDfs(r->right,d+1);
	}

	int deepestLeavesSum(TreeNode* root) {
		ans=0; mx=0;
		getDfs(root,0);
		return ans;
	}
};