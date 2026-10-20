class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 1, h = n;
        while(l<=h){
            long long m = l + (h-l)/2;
            if((m*(m+1))/2<=n) l = m+1;
            else h = m-1;
        }
        return h;
    }
};