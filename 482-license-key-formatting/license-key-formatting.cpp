class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans, rem;
        int ind;
        int n = s.size();
        // for(int i = 0; i<n; i++){
        //     if(s[i] !='-') ans+=(s[i]>='a' && s[i]<='z' ? s[i]-32 : s[i]);
        //     else{
        //         ind = i+1;
        //         break;
        //     }
        // }
        for(int i = 0; i<n; i++){
            if(s[i]!='-') rem += (s[i]>='a' && s[i]<='z' ? s[i]-32 : s[i]);
        }
        reverse(rem.begin(), rem.end());
        int m = rem.size();
        for(int i = 0; i<rem.size(); i+=k){
            if(i) ans += '-';
            for(int j = i; j < min(i+k, m); j++){
                ans += rem[j];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};