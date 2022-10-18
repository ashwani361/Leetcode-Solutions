//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> v)
	{
		vector<int>ans;
		for (int k = 0; k < n; k++) {
 
            // traversing downwards starting
            // from first row
            int row = 0, col = k;
            while (col >= 0) {
                // cout << matrix[row][col] << " ";
                ans.push_back(v[row][col]);
                row++, col--;
            }
        }
     
        // printing elements below second
        // diagonal
        for (int j = 1; j < n; j++) {
     
            // traversing downwards starting
            // from last column
            int col = n - 1, row = j;
            while (row < n) {
                // cout << matrix[row][col] << " ";
                ans.push_back(v[row][col]);
                row++, col--;
            }
        }
        return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends