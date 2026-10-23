class Solution {
    #define fi first
    #define se second
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string cur;
        for(auto &x: s){
            if(x==' '){
                v.push_back(cur);
                cur = "";
            }
            else cur += x;
        }
        v.push_back(cur);

        if(v.size() != pattern.size()) return 0;

        map<string, char> mpp;

        for(int i = 0; i<pattern.size(); i++){
            if(mpp.find(v[i])==mpp.end()) mpp[v[i]] = pattern[i];
            else if(mpp[v[i]] != pattern[i]) return false; 
        }

        map<char, string> mpp2;

        for(int i = 0; i<pattern.size(); i++){
            if(mpp2.find(pattern[i])==mpp2.end()) mpp2[pattern[i]] = v[i];
            else if(mpp2[pattern[i]] != v[i]) return false; 
        }
        // for(auto &x:mpp) cout<< x.first<<"->"<<x.se <<" ";

        return true;


    }
};