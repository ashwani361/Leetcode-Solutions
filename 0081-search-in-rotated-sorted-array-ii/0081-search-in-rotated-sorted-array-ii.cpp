class Solution {
public:
    bool search(vector<int>& v, int t) {
        int n = v.size();
        
        if(n==1){
            if(t==v[0]){
                return true;
            }
            else{
                return false;
            }
        }
        if(n==2){
            if(t==v[0] or t==v[1]){
                return true;
            }
            else{
                return false;
            }
        }
        
        int l =0, r = n-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(v[m]==t){
                return true;
            }
            
            if( (v[l] == v[m]) and (v[r] == v[m]) ) {
                ++l; --r;
            }
            else if(v[l]<=v[m]){
                if(v[l]<=t and t<v[m]){
                    r = m-1;
                }
                else{
                    l = m+1;
                }
            }
            else{
                if(t>v[m] and t<=v[r]){
                    l = m+1;
                }
                else{
                    r = m-1;
                }
            }
        }
        return false;
    }
};


// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         int left = 0, right =  nums.size()-1, mid;
        
//         while(left<=right)
//         {
//             mid = (left + right) >> 1;
//             if(nums[mid] == target){
//                 return true;
//             }

//             // the only difference from the first one, trickly case, just update left and right
//             if( (nums[left] == nums[mid]) && (nums[right] == nums[mid]) ){
//                 ++left; --right;
//             }
//             else if(nums[left] <= nums[mid])
//             {
//                 if( (nums[left]<=target) && (nums[mid] > target)){
//                     right = mid-1;
//                 }
//                 else{
//                     left = mid + 1; 
//                 }
//             }
//             else
//             {
//                 if((nums[mid] < target) &&  (nums[right] >= target)){
//                     left = mid+1;
//                 }
//                 else{
//                     right = mid-1;
//                 }
//             }
//         }
//         return false;
//     }
// };