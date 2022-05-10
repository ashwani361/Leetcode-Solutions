class Solution {
string key[10] = {"", "" , "abc","def", "ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    vector<string> comb ( string s)
    {
        if(s.size()==0)
            return {""};
        
        int no = s[0] - '0';
        
        vector<string> output ;
        
        vector<string> small = comb(s.substr(1)) ; 
        
        for(char c : key[no])
        {
            for( string  str : small)
            {
                output.push_back(c+str);
            }
        }
        
        return output;
        
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        
        return comb(digits);
    }
};