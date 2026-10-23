class Solution {
    using ll = long long;
public:
    int minOperations(vector<int>& v, int k) {
        ll x = 0;

        for(int &p : v){
            x ^= p;
        } 
        ll cnt = 0;

        for(ll mask = 0; mask <= 6*log2(10); mask++){
            if((k&(1LL<<mask))^(x&(1LL<<mask))) cnt++;
        }
        return cnt;

        
    }
};