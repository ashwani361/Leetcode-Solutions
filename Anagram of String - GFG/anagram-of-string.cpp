// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string x, string y)
{
    int n = x.size(), m = y.size();
    unordered_map<char, int>a;
    for(auto i:x){
        a[i]++;
    }
    for(auto i:y){
        a[i]--;
    }
    int c = 0;
    for(auto it:a){
        c+=abs(it.second);
    }
    return c;
}