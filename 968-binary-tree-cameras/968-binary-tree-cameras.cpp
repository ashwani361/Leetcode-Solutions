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
    /*
    *0 = i have a camera
    *1 = i am covered with camera
    *-1 = i need a camera
    */
    
    int minCameraCoverUtil(TreeNode* root, int &ans){
        //if root is null returning i am covered with camera
        if(root == NULL) return 1;
        
        int left = minCameraCoverUtil(root->left, ans);
        int right = minCameraCoverUtil(root->right, ans);
        //if either left or right need a camera then add the camera to the root
        //and return i have a camera
        if(left == -1 || right== -1) {
            ans++;
            return 0;
        }
        //if anyone children had a camera 
        //and return i am covered with other camera
        if(left == 0 || right ==0) return 1;
        // it returns i have no camera. i need a camera
        return -1;
    }
    int minCameraCover(TreeNode* root) {
        int ans=0;
        if(minCameraCoverUtil(root, ans)==-1) ans++;
        return ans;
    }
};