class Solution {
public:
    bool detectCapitalUse(string s) {
        int c= 0;
        int n = s.size();
        for(int i = 0;i<n; i++){
            if(s[i]<97) c++;
        }
        if(c==n || c==0) return 1;
        if(c==1 && s[0]<97) return 1;
        else return 0;
    }
};