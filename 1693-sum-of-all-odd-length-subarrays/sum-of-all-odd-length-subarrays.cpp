class Solution {
    using ll = long long;
public:
    int sumOddLengthSubarrays(vector<int>& v) {
        ll n = v.size();
        ll ans = 0;
    
        for(ll l = 1; l<=n; l+=2){
            ll sum = 0;
            for(ll j = 0; j<l;j++){
                sum += v[j];
            }
            ans += sum;
            for(ll i = l; i<n; i++){
                sum += v[i];
                sum -= v[i-l];
                ans += sum;
            }
            cout<< ans <<"\n";
        }

        return ans;
        

    }
};