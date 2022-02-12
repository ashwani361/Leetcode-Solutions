// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
 public:
   string newIPAdd (string s)
   {
       
       string ans = "";
       
       string str = "";
       int ct = 0;
       int n = s.length();
       for(int i=0;i<n;i++)
       {
           if(s[i] == '.')
           {
               if(str == "")
               {
                   ans += "0";
               }
               
               else 
               ans += str;
               ans += '.';
               str = "";
               ct = 0;
           }
           
           else
           {
               if(ct == 0)
               {
                   if(s[i] == '0')
                   {
                       
                   }
                   
                   else 
                   {
                       str += s[i];
                       ct = 1;
                   }
               }
               
               else if(s[i] != '.')
               {
                   str += s[i];
               }
                
           }
       }
       
        
       if(str.size() != 0)
       {
           ans += str;
       }
       else
       ans += "0";
       return ans;
   }
};
// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends