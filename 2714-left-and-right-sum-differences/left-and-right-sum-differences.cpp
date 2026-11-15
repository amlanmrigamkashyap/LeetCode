class Solution {
    typedef int ll;
    typedef vector<ll> vll;
public:
    vector<int> leftRightDifference(vector<int>& v) {
        ll n = v.size();
        vll pf(n), sf(n);

        for(int i = 0; i<n ;i++){
            pf[i] = v[i];
            sf[i] = v[i];
            if(i) pf[i] += pf[i-1];
        }
        for(int i = n-2; i>=0; i--) sf[i] += sf[i+1];

        vll ans(n);
        for(int i = 0; i<n; i++){
            ll p = (i==0 ? 0 : pf[i-1]);
            ll s = (i== n-1? 0 : sf[i+1]);

            ans[i] = abs(p-s);
        }

        return ans;
    }
};