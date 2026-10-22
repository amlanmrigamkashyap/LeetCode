class Solution {
    using ll = long long;
public:
    vector<int> nextGreaterElement(vector<int>& v1, vector<int>& v2) {
        ll n = v1.size();
        vector<int> ans(n);
        for(ll i = 0; i<n; i++){
            ll val = v1[i];
            ll ind = -1, p = 0;
            for(ll j = 0; j<v2.size(); j++){
                if(v2[j]==val){
                    ind = j;
                    break;
                }
            }
            for(ll j = ind+1; j<v2.size(); j++){
                if(v2[j]>val){
                    ans[i] = v2[j];
                    p=1;
                    break;
                }
            }
            if(!p) ans[i] = -1;

        }
        return ans;

    }
};