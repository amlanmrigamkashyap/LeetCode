class Solution {
public:
    int smallestNumber(int n) {
        int mask = 0;
        while(n>=(1<<mask)){
            n |=(1<<mask);
            mask++;
        }
        return n;
    }
};