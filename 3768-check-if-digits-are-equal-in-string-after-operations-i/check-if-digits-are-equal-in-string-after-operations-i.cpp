class Solution {
public:
    bool hasSameDigits(string s) {
        
        if(s.size() == 2) return s[0] == s[1];

        string ans;
        for(int i = 0; i<s.size()-1; i++){
            int n = (s[i]+s[i+1]-'0'-'0')%10;
            ans += n+'0';
        }
        return (hasSameDigits(ans));
    }
};