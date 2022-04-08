class KthLargest {
public:
    vector<int>v;
    int t;
    priority_queue<int, vector<int>, greater<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        t = k;
        for(int i=0; i<nums.size(); i++){
            // v.push_back(nums[i]);
            pq.push(nums[i]);
        }
        // if(pq.size()>t){
        //     pq.pop();
        // }
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size()>t){
            pq.pop();
        }
        // if(pq.size()>t){
        //     pq.pop();
        // }
        // v.push_back(val);
        // sort(v.begin(), v.end(), greater<int>());
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */