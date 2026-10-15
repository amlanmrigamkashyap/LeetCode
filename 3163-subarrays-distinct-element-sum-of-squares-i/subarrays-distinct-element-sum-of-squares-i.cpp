class Solution {
    using ll = long long;
public:
    int sumCounts(vector<int>& v) {
        ll n = v.size();
        ll ans = n;

        for(ll k = 2; k<=n; k++){
            multiset<ll> s;
            for(ll i = 0; i<k; i++) s.insert(v[i]);
            set<ll> st(s.begin(), s.end());
            ans += st.size()*st.size();
            for(ll i = k; i<n; i++){
                s.erase(s.find(v[i-k]));
                s.insert(v[i]);
                set<ll> sst(s.begin(), s.end());
                ans += sst.size()*sst.size();
            }

        }

        return (int)ans;
        
    }
};