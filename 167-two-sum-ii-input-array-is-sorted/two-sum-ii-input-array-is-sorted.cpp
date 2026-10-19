class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n =v.size();
        for(int i = 0; i<n;i++){
            int rem = t - v[i];
            int ind = upper_bound(v.begin(), v.end(), rem) - v.begin();
            if(ind!=0 && v[ind-1]==rem) return {i+1,ind};
        }
        return {};
    }
};