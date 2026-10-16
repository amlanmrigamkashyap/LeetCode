class Solution {
    using ll = long long;
    bool prime(ll x){
        if(x==1) return false;
        for(ll i = 2; i*i<=x; i++){
            if(x%i==0) return false;
        }
        return true;
    }
public:
    bool checkPrimeFrequency(vector<int>& v) {
        map<ll,ll> freq;
        for(auto &x : v){
            freq[x]++;
        }
        for(auto &x:freq){
            if(prime(x.second)){
                return true;
            }
        }
        return false;
    }
};