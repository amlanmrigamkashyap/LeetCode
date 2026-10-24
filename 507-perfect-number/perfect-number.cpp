class Solution {
    using ll = long long;
public:
    bool checkPerfectNumber(int n) {
        if(n == 1) return false;
        ll sum = 0;
        for(int i = 1; i*i<=n; i++){
            if(n%i==0){
                sum += i;
                if(i!=1 && i*i!=n) sum+=n/i;
            }
        }
        if(sum == n) return true;
        else return false;
    
    }
};