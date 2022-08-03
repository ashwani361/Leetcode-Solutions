class MyCalendar {
public:
    vector<pair<int, int>>v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for (auto it : v) {
            int intersectStart = max(it.first, start);
            int intersectEnd = min(it.second, end);
            if (intersectStart < intersectEnd)
                return false;
        }
        v.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */