// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    #define s 26

    struct TrieNode
    {
        struct TrieNode* children[s];
        int count;
        bool end;
    };
    struct TrieNode* getNode()
    {
        struct TrieNode* node = new TrieNode;
        for(int i = 0; i < s; i++)
        {
            node->children[i]=NULL;
        }
        node->end=false;
        node->count=0;
        return node;
    }
    
    void insert(TrieNode* root,string key)
    {
        struct TrieNode* temp=root;
        int len = key.length();
        for(int i = 0; i < len; i++)
        {
            if(!temp->children[key[i]-'a'])
                temp->children[key[i]-'a'] = getNode();
            temp=temp->children[key[i]-'a'];
            temp->count++;
        }
        temp->end = true;
    }
    
    string search(TrieNode* root, string key)
    {
        string res;
        struct TrieNode* temp=root;
        int len=key.length();
        for(int i = 0; i < len; i++)
        {
            res.push_back(key[i]);
            temp=temp->children[key[i]-'a'];
            if(temp->count==1)
                break;
        }
        return res;
    }
        
        
        
    // Function to print all prefixes that uniquely
    // represent all words in arr[0..n-1]
    public:
    vector<string> findPrefixes(string arr[], int n)
    {
        struct TrieNode* root=getNode();
        for(int i = 0; i< n; i++)
            insert(root, arr[i]);
        
        vector<string>res;
        for(int i = 0; i < n; i++)
            res.push_back(search(root,arr[i]));
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}
  // } Driver Code Ends