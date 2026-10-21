class Solution {
    using ll = long long;
public:
    vector<string> validStrings(int n) {
        vector<string> st;
        // if(n==1) return {"1","0"};
        
        for(ll i = 0; i<(1<<n); i++){
            ll prev = 1;
            ll flag = 1;
            for(ll mask =0; mask <n; mask++){
                if((i&(1<<mask))==0){
                    if(prev == 0){
                        flag = 0;
                        break;
                    }
                    else prev = 0;
                }
                else prev = 1;
            }
            if(!flag) continue;
            string s;
            for(ll mask = 0; mask<n; mask++){
                bool t = (i&(1<<mask));
                s+=(char)(t+'0');
            }
            reverse(s.begin(), s.end());
            st.push_back(s);
            
        }

        return st;
    }
};