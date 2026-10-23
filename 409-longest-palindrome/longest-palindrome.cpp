class Solution {
    #define se second
    using ll = long long;
public:
    int longestPalindrome(string s) {
        map<char, ll> mpp;
        for(auto &x: s) mpp[x]++;

        ll len = 0, odd = 0;
        for(auto &x: mpp){
            if(x.se&1){
                odd = 1;
                len += x.se -1;
            }
            else len += x.se;
        }

        return len + odd;
        
    }
};