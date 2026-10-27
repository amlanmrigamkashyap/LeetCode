class Solution {
    using ll = long long;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        ll n = v.size();
        set<vector<int>> st;

        for(ll mask = 0; mask<(1<<n); mask++){
            vector<int> s;
            for(ll i = 0; i<n; i++){
                if(mask&(1<<i)) s.push_back(v[i]);
            }
            sort(s.begin(), s.end());
            st.insert(s);
        }
        vector<vector<int>> ps(st.begin(), st.end());
        
        return ps;
    }
};