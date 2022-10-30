class MyStack {
public:
    queue<int>helper, nums;
    MyStack() {
        
    }
    
    void push(int x) {
        helper.push(x);
        while(nums.size()){
            helper.push(nums.front());
            nums.pop();
        }
        while(helper.size()){
            nums.push(helper.front());
            helper.pop();
        }
    }
    
    int pop() {
        int t = nums.front();
        nums.pop();
        return t;
    }
    
    int top() {
        return nums.front();
    }
    
    bool empty() {
        return nums.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */