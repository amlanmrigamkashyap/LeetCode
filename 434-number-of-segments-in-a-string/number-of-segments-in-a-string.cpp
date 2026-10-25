class Solution {
    using ll = long long;
public:
    int countSegments(string s) {
         
        ll p = 0, cnt = 0;
        for(auto &c : s){
            if(p==0 && c!=' '){
                cnt++;
                p = 1;
            }
            else if(c==' ') p=0;
        }
        return cnt;
    }
};