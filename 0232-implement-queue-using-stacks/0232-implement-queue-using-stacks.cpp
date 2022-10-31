class MyQueue {
public:
    stack<int>nums, helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(nums.size()){
            helper.push(nums.top());
            nums.pop();
        }
        nums.push(x);
        while(helper.size()){
            nums.push(helper.top());
            helper.pop();
        }
    }
    
    int pop() {
        int t = nums.top();
        nums.pop();
        return t;
    }
    
    int peek() {
        return nums.top();
    }
    
    bool empty() {
        return nums.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */