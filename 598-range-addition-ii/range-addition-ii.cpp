class Solution {
    using ll = long long ;
    // #define INF 1e8
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int rmin = m, cmin = n;
        for(auto &x: ops){
            rmin=min(rmin, x[0]);
            cmin=min(cmin, x[1]);
        }
        return cmin*rmin;

    }
};