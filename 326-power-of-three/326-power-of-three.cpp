class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
        return false;
    /* The maximum power of 3 value that
       integer can hold is 1162261467 ( 3^19 ) .*/
    return 1162261467 % n == 0;
    }
};