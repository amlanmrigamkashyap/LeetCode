class Solution {
    using ll = long long;
public:
    int sortPermutation(vector<int>& v) {
        ll k = (1LL<<(int)(5*log2(10)+1))-1;
        ll kk = k;
        for(int i = 0; i<v.size(); i++){
            if(v[i]!= i) k &= v[i];
        }
        if(kk == k) return 0;
        return k;
    }
};