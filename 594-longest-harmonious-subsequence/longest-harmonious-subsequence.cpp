class Solution {
    using ll = long long;
    #define se second
    #define fi first
public:
    int findLHS(vector<int>& v) {
        map<ll,ll> mpp;
        for(auto &x : v) mpp[x]++;
        ll ans = 0;
        for(auto &x : mpp){
            if(mpp.find(x.fi+1) == mpp.end()) continue;
            else ans = max(ans, x.se + mpp[x.fi+1]);
        }
        return ans;
    }
};