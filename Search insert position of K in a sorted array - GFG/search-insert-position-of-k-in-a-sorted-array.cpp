// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    int binarySearch(vector<int> a, int n, int k){
        int beg = 0, end = n - 1;
        int mid;
        while(beg <= end){
            mid = beg + (end - beg)/2;
            if(a[mid] == k)
                return mid;
            else if(a[mid] > k)
                end = mid - 1;
            else
                beg = mid + 1;
        }
        return beg;
    }
    
public:

    int searchInsertK(vector<int>Arr, int N, int k){
        return binarySearch(Arr,N,k);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends