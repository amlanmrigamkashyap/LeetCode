class Solution {
    using ll = long long;
public:
    bool isSubsequence(string s, string t) {
        ll n = s.size(), m = t.size();
        ll i = 0, j = 0;

        while(i<n && j <m){
            char c = s[i];
            while(j<m){
                if(t[j]==c){
                    i++;
                    j++;
                    break;
                }
                j++;
            }
        }

        if(i==n) return 1;
        return 0;
        
    }
};