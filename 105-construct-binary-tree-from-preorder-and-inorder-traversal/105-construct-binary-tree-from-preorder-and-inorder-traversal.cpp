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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0)
             return NULL;

         stack<int> s;
         stack<TreeNode *> st;
         TreeNode *t,*r,*root;
         int i,j,f;

         f=i=j=0;
         s.push(preorder[i]);

         root = new TreeNode(preorder[i]);
         st.push(root);
         t = root;
         i++;

         while(i<preorder.size())
         {
             if(!st.empty() && st.top()->val==inorder[j])
             {
                 t = st.top();
                 st.pop();
                 s.pop();
                 f = 1;
                 j++;
             }
             else
             {
                 if(f==0)
                 {
                     s.push(preorder[i]);
                     t -> left = new TreeNode(preorder[i]);
                     t = t -> left;
                     st.push(t);
                     i++;
                 }
                 else 
                 {
                     f = 0;
                     s.push(preorder[i]);
                     t -> right = new TreeNode(preorder[i]);
                     t = t -> right;
                     st.push(t);
                     i++;
                 }
             }
         }

         return root;
    }
};