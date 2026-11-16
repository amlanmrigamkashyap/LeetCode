class Solution {
    using ll  = long long;
public:
    int prefixCount(vector<string>& words, string pref) {
        ll n = pref.size(), cnt = 0;
        for(auto &s : words){
            ll p =1;
            for(ll i = 0; i<n; i++){
                if(s[i]!=pref[i]){
                    p = 0;
                    break;
                }
            }
            if(p) cnt++;
        }
        return cnt;
    }
};