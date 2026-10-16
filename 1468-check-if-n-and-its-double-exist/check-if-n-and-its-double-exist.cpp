class Solution {
    #define fi first
    #define se second
    using ll = long long;
public:
    bool checkIfExist(vector<int>& arr) {
        map<ll,ll> mpp;
        for(auto &x: arr){
            mpp[x]++;
        }
        for(auto &x:mpp){

            if(!x.fi){
                if(x.se>1) return 1;
            }
            else if(mpp.find(2*x.fi)!=mpp.end()) return 1;
        }
        return 0;
    }
};