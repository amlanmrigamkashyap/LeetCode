class Solution {
    using ll = long long;
public:
    vector<int> minOperations(string v) {
        ll n = v.size();
        vector<int> pf(n), sf(n);

        ll pc = 0, sc = 0;
        for(int i = 0 ; i<n; i++){
            if(i) pf[i] = pf[i-1] + pc;
            pc += v[i]-'0';
        }
        for(int i = n-1 ; i>=0; i--){
            if(i!=n-1) sf[i] = (sf[i+1] + sc);
            sc+= v[i]-'0';
        }

        vector<int> ans(n);

        for(int i = 0 ; i<n; i++){
            ll p = (i==0?0:pf[i]);
            ll s = (i==n-1?0:sf[i]);

            ans[i] = s+p;
            cout<< p << ","<< s << " ";
        }
        return ans;
        
    }
};