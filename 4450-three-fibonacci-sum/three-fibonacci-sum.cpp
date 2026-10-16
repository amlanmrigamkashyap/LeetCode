class Solution {
    using ll = long long;
public:
    bool threeFibonacciSum(int n) {
        if(n&1) return 0;
        n /= 2;
        ll prev2 = 0, prev1 = 1;
        while(prev1+prev2<=n){
            prev1 += prev2;
            prev2 = prev1 - prev2;
        }
        return (prev1==n);
        
    }
};