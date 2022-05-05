// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string stringPartition(string S, int aa, int bb){
        int n = S.length();
        if(n < 2) return "-1";
        vector<int> a(n - 1, 0);
        a[n - 2] = S[n - 1] - '0';
        for(int i = n - 2; i > 0; i--)
        {
            int num = (S[i] - '0') * pow(10, n - i - 1) + a[i];
            a[i - 1] = num;
        }
        int i = 0, val = 0;
        string ans;
        while(i < n - 1)
        {
            ans += S[i];
            val = (val * 10) + (S[i] - '0');
            if(!(val % aa) && !(a[i] % bb))
            {
                ans += " ";
                ans += S.substr(i + 1);
                return ans;
            }
            i++;
        }
        return "-1";
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends