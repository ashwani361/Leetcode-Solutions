class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int up = 1, down = 1;
        for (int i = 0; i < nums.size()-1; ++i) {
            if (nums[i+1] > nums[i]) up = down + 1;
            else if (nums[i+1] < nums[i]) down = up + 1;
        }
        return max(down, up);
    }
};