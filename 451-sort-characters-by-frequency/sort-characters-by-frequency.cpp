class Solution {
    using ll = long long;
public:
    string frequencySort(string s) {
        vector<pair<ll,char>> v;
        unordered_map<char,ll> freq;
        for(auto &c : s){
            freq[c]++;
        }

        for(auto &[c,f] : freq){
            v.push_back({f,c});
        }
        sort(v.begin(), v.end(), greater<pair<ll,char>>());

        string ans;

        for(auto &[f,c] : v){
            
            while(f--){
                ans += c;
            }
        }
        return ans;
    }
};