class Solution {
#define pb push_back
typedef long long ll; 

private: 
    void dfs(ll p, vector<vector<ll>> &adjLs, vector<ll> &vis){
        ll n = adjLs[p].size();
        for(ll i = 0; i<n;i++){
            ll nbr = adjLs[p][i];
            if(!vis[nbr]){
                vis[nbr] = 1;
                dfs(nbr, adjLs, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& v) {
        ll n = v.size();
        vector<vector<ll>> adjLs(n);
        for(ll i = 0; i<n; i++){
            for(ll j = i+1; j<n; j++){
                if(v[i][j] == 1 && i != j){
                    adjLs[i].pb(j);
                    adjLs[j].pb(i);
                }
            }   
        }
        vector<ll> vis(n,0);
        int cnt = 0;

        for(ll i = 0; i<n; i++){
            if(!vis[i]){
                cnt++;
                vis[i] = 1;
                dfs(i, adjLs, vis);
            }
        }

        return cnt;
    }
};