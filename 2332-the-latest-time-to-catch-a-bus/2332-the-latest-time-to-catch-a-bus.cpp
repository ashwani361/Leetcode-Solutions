class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());
        
        int n = buses.size(), m = passengers.size();
        for(int i = 0, j = 0; i < n; i++){
            int cnt = 0;
			
			// Let's fill the bus with passengers
            while(j < m && passengers[j] <= buses[i] && cnt < capacity) j++, cnt++;
            
            // We have to pick last bus
            if(i == n-1){
                if(cnt < capacity){
                    // Here we have to catch bus before it's arrive time : as there's some seats left
                    int t = buses[i];
                    
                    // We have to come before or equal to the bus time, 
					// so we start comparing bus time with last passenger time until we reached after
					// last passenger time and also able to board on bus.
                    for(int k = j-1; k >= 0 && passengers[k] == t; k--, t--);
                    return t;
                    
                }else{ // full of passengers...
                    int t = passengers[j-1] - 1; // here's we have to reach before last passenger on board...
                    
                    // Here we have to compare last on board passenger time with other previous passengers...
					// Here we only able to get on bus, if there's time gap between any 2 passengers.
                    for(int k = j-2; k >= 0 && passengers[k] == t; k--, t--);
                    return t;
                }
            }
        }
        
        return -1;
    }
};