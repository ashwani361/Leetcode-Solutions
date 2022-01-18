class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int c=0;
        int m=f.size();
        for(int i=0;i<m;i++)
        {
            if(f[i]==1)
            {
                c=i;
                continue;
            }
            if((c!=i-1) && (i==m-1 || f[i+1]!=1))
            {
                   n--;
                   c=i;
            }
        }
        return (n<=0);
    }
};