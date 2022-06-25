class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        if(n==1 || n==2)
            return true;
        int i=0;
        int j=1;
        int count=0;
        int maxSoFar=-100000;
        while(i<n && j<n)
        {
            if(nums[j] < nums[i])
            {
                count++;
                if(count>1)
                    return false;
                if(maxSoFar <= nums[j])
                    nums[i]=nums[j];
                else
                    nums[j] = max(maxSoFar, nums[i]);
            }
            maxSoFar=max(maxSoFar, nums[i]);
            i++;
            j++;
        }
        if(count>1)
            return false;
        return true;
    }
};