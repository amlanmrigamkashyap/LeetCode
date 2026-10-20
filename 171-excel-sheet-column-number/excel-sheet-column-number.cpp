class Solution {
public:
    int titleToNumber(string s) {
        long long int pow = 1, ans = 0;
        reverse(s.begin(), s.end());
        for(auto &x: s){
            ans += (x-64)*pow;
            pow *= 26;
        }
        return (int)ans;
    }
};