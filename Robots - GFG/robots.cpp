// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string moveRobots(string s1, string s2){
        // code here 
        stack <pair <char,int>> st;
        int n2=s2.size();
        for(int i=n2-1;i>=0;i--){
            
            if(s2[i]!='#'){
                st.push({s2[i],i});
            }
            
        }
        int n1=s1.size();
        for(int i=0;i<n1;i++){
            if(s1[i]!='#'){
                if(s1[i]==st.top().first){
                    if(s1[i]=='A' && st.top().second<=i){
                        st.pop();
                    }
                    if(s1[i]=='B' && st.top().second>=i){
                        st.pop();
                    }
                }
                else{
                    return "No";
                }
            }
        }
        if(st.empty())
        return "Yes";
        
        return "No";
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        Solution ob;
        cout << ob.moveRobots(s1, s2) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends