class Solution {
public:
    string capitalizeTitle(string t){
        int j=0,n=t.size();
        while(j<n){
            //put 'i' at start every time
            int i=j;   

            //keep on converting the letter of current word into lowercase {32 is ASCII of space}
            while(j<n and t[j]!=32) t[j]=tolower(t[j]), j++;

            //now we have length of current word 
            //Now make First Capital case -> if length>2
            if(j-i>2) t[i]=toupper(t[i]);

            j++; //to go next word
        }
        return t;
    }
};