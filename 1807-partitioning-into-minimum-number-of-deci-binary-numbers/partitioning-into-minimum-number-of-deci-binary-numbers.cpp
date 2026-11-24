class Solution {
    using ll = int;
public:
    int minPartitions(string s) {
        ll mx = 0;
        for(auto &c : s){
            mx = max(mx, c-'0');
        }
        return mx;
    }
};