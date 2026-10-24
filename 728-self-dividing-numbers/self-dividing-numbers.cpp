class Solution {
    bool check(int n){
        int nn = n;
        while(nn){
            int ld = nn%10;
            if(!ld) return false;
            if(n%ld!=0) return false;
            nn /= 10;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i<=right; i++){
            if(check(i)) ans.push_back(i);
        }
        return ans;
    }
};