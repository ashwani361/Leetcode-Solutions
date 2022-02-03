// { Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
#define MAX 50
class Solution{
    public:
    string ExcelColumn(int n)
    {
        // Your code goes here
        char str[MAX]; // To store result (Excel column name)
        int i = 0; // To store current index in str which is result
    
        while (n > 0) {
            // Find remainder
            int rem = n % 26;
    
            // If remainder is 0, then a 'Z' must be there in output
            if (rem == 0) {
                str[i++] = 'Z';
                n = (n / 26) - 1;
            }
            else // If remainder is non-zero
            {
                str[i++] = (rem - 1) + 'A';
                n = n / 26;
            }
        }
        str[i] = '\0';

        // Reverse the string and print result
        reverse(str, str + strlen(str));
        // cout << str << endl;
    
        return str;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends