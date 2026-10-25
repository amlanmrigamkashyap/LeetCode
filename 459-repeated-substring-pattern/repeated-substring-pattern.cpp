class Solution {
    using ll = long long;
public:
    bool repeatedSubstringPattern(string s) {
        ll n = s.size();
        for(ll k = 1; k<= n/2; k++){
            ll j = k, p =1;
            while(j<n){
                if(s[j-k]!=s[j]){
                    p = 0;
                    break;
                }
                j++;
            }

            if(p){
                j--;
                ll q = 1;
                for(ll i = k-1; i>=0; i--){
                    if(s[i] != s[j]){
                        cout<< i <<"!="<< j <<" ";
                        q = 0;
                        break;
                    }
                    j--;
                }
                if(q) return true;
            }
        }
        return false;
    }
};