class Solution {
    using ll = long long;
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        vector<int> ans;
        map<ll,ll> mpp;
        ll n = v.size();
        for(ll i = n-1; i>=0; i--){
            ll val = v[i];
            mpp[val] = i;
            ll mn = 1e9; 
            for(ll j = val+1; j<=100; j++){
                if(mpp[j]){
                    mn = min(mpp[j], mn);
                }
            }
            if(mn == 1e9) ans.push_back(0);
            else ans.push_back(mn - i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};