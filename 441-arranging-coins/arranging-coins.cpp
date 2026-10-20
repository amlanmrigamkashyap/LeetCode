class Solution {
public:
    int arrangeCoins(int n) {
        long long i = 1;
        while(1){
            long long val = (i*(i+1))/2;
            if(val>n) break;
            else i++; 
        }
        return --i;
    }
};