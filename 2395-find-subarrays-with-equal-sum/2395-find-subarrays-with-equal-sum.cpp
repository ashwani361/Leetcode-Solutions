class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        set<int> ans;
        
        for(int i = 1; i < nums.size(); i++){
            ans.insert(nums[i] + nums[i-1]);   // Push sum of all consecutive numbers in array.
        }
        // If all the consecutive sum pair is distinct then set size should be same as 
        // number of elements pushed in set (ans). then return false. else true.
        if(ans.size() == (nums.size()-1)){
            return false;
        }
        return true;
    }
};