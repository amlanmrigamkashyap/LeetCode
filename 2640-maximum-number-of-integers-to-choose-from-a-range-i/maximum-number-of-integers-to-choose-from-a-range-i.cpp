class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> ban(banned.begin(), banned.end());
        int cnt = 0;
        for(int i = 1; i<=n;i++){
            if(ban.find(i)==ban.end()){
                if(maxSum>=i){
                    maxSum-=i;
                    cnt++;
                }
                else return cnt;
            } 
        }
        return cnt;
    }
};