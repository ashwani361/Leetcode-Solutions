// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void helper(vector<int>& nums, int start, int end, vector<int>& preorder){
        if(start > end) return;
        if(start == end){
            preorder.push_back(nums[start]);
            return;
        }
        int mid = start + (end - start)/2;
        preorder.push_back(nums[mid]);
        helper(nums, start, mid - 1, preorder);
        helper(nums, mid + 1, end, preorder);
    }

    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> preorder;
        helper(nums, 0, nums.size() - 1, preorder);
        return preorder;
    }

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends