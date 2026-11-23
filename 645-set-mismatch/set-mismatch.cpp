class Solution {
    using ll = long long;
public:
    vector<int> findErrorNums(vector<int>& v) {
        sort(v.begin(), v.end());
        ll n = v.size();
        int miss = -1, dou = -1;

        map<ll,ll> mpp;
        for(auto &x : v) mpp[x]++;
        for(ll i = 1; i<=n; i++){
            if(!mpp[i]){
                miss = i;
            }
            else if(mpp[i]==2) dou = i;
        }
        return {dou, miss};
    }
};