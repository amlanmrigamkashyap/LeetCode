class Solution {
    bool prime(int n){
        if(n==1) return false;
        for(int i = 2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
public:
    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int i = left; i<=right ; i++){
            int val = __builtin_popcount(i);
            // cout<< val << " ";
            if(prime(val)) cnt++;
        }
        return cnt;
    }
};