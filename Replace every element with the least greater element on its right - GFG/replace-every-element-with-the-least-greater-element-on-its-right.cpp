//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    
    public:
    
    // function to get the next least greater index for each and
    // every temp.second of the temp array using stack this
    // function is similar to the Next Greater element for each
    // and every element of an array using stack difference is
    // we are finding the next greater index not value and the
    // indexes are stored in the temp[i].second for all i
    vector<int> nextGreaterIndex(vector<pair<int, int> >& temp)
    {
        int n = temp.size();
        // initially result[i] for all i is -1
        vector<int> res(n, -1);
        stack<int> stack;
        for (int i = 0; i < n; i++) {
            // if the stack is empty or this index is smaller
            // than the index stored at top of the stack then we
            // push this index to the stack
            if (stack.empty() || temp[i].second < stack.top())
                stack.push(
                    temp[i].second); // notice temp[i].second is
                                     // the index
            // else this index (i.e. temp[i].second) is greater
            // than the index stored at top of the stack we pop
            // all the indexes stored at stack's top and for all
            // these indexes we make this index i.e.
            // temp[i].second as their next greater index
            else {
                while (!stack.empty()
                       && temp[i].second > stack.top()) {
                    res[stack.top()] = temp[i].second;
                    stack.pop();
                }
                // after that push the current index to the stack
                stack.push(temp[i].second);
            }
        }
        // now res will store the next least greater indexes for
        // each and every indexes stored at temp[i].second for
        // all i
        return res;
    }
    // now we will be using above function for finding the next
    // greater index for each and every indexes stored at
    // temp[i].second

    vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<pair<int, int> > temp;
        for (int i = 0; i < n; i++) {
            temp.push_back({ arr[i], i });
        }
        // we sort the temp according to the first of the pair
        // i.e value
        sort(temp.begin(),temp.end(),[](const pair<int,int> &a,const pair<int,int> &b){
                if(a.first==b.first)
                 return a.second>b.second;
                 return a.first<b.first;});
        // now indexes vector will store the next greater index
        // for each temp[i].second index
        vector<int> indexes = nextGreaterIndex(temp);
        // we initialize a result vector with all -1
        vector<int> res(n, -1);
        for (int i = 0; i < n; i++) {
            // now if there is no next greater index after the
            // index temp[i].second the result will be -1
            // otherwise the result will be the element of the
            // array arr at index indexes[temp[i].second]
            if (indexes[temp[i].second] != -1)
                res[temp[i].second]
                    = arr[indexes[temp[i].second]];
        }
        // return the res which will store the least greater
        // element of each and every element in the array at its
        // right side
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends