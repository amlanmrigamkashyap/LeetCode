class Solution {
    using ll = long long;
public:
    vector<int> intersect(vector<int>& v, vector<int>& a) {
        map<ll,ll> mpp;
        vector<int> ans;
        for(auto &x : v) mpp[x]++;

        for(auto &x : a){
            if(mpp[x]){
                ans.push_back(x);
                mpp[x]--;
                // if(!mpp[x]) mpp.erase(x);
            }
        }
        return ans;
    }
};