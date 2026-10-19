class Solution {
    using ll = long long;
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        ll cnt = 0, sm = 0;
        for(auto &x: nums){
            if(x<target) sm++;
            else if(x==target) cnt++;
        }
        vector<int> ans;
        while(cnt--){
            ans.push_back(sm);
            sm++;
        }
        return ans;
    }
};