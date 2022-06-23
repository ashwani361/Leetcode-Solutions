class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        // sort by deadline
        sort(courses.begin(), courses.end(),
             [](vector<int>& left, vector<int>& right) {
                 return left[1] < right[1];
             });
        
        std::vector<int> r;
        r.reserve(courses.size());

        int days = 0;
        for(const auto& c : courses) {
            const int duration = c[0];
            const int deadline = c[1];
            
            if(days + duration <= deadline) {
                // can use current course
                days += duration;
                
                // push its duration to heap
                r.emplace_back(duration);
                push_heap(r.begin(), r.end());
            }
            else if(!r.empty() && r.front() > duration) {
                // if current course can't be used,
                // try to change already applied course
                // with max duration with current one
                
                days += duration - r.front();
                
                // pop maximimum duration course
                pop_heap(r.begin(), r.end());
                r.pop_back();
                
                // push current duration
                r.push_back(duration);
                push_heap(r.begin(), r.end());
            }
        }
        
        return r.size();
    }
};