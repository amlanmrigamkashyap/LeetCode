class Solution {
    using ll = long long;
public:
    int numberOfArithmeticSlices(vector<int>& v) {
        ll n = v.size();
        ll cnt = 0 ;
        for(ll i = 0; i<n-2; i++){
            ll d;
            if(v[i+2]-v[i+1] == v[i+1]-v[i]){
                cnt++;
                d = v[i+1]-v[i];
            }
            else continue;
            for(ll j = i+3; j<n; j++){
                if(v[j]-v[j-1]==d) cnt++;
                else break;
            }
        }
        
        return (int)cnt;
    }
};