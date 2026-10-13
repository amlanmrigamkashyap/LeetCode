class Solution {
    typedef long long ll;
    typedef vector<vector<ll>> vvl;
    typedef vector<ll> vll;
    vector<pair<ll,ll>> d = {{1,0},{-1,0},{0,1},{0,-1}};

    void dfs(ll i, ll j, vector<vector<char>> &grid, vvl &vis){
        ll n = grid[0].size(), m = grid.size();
        vis[i][j] = 1;
        for(auto &[dx,dy]:d){
            if(i+dx<0 || i+dx>=m ||j+dy<0 || j+dy>=n) continue;
            if(!vis[i+dx][j+dy] && grid[i+dx][j+dy]=='1'){
                dfs(i+dx, j+dy, grid, vis);
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        ll m = grid.size();
        ll n = grid[0].size();
        vvl vis(m, vll(n,0));
        ll cnt = 0;

        for(ll i = 0; i<m; i++){
            for(ll j = 0;j<n; j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    cnt++;
                    dfs(i, j, grid, vis);
                    
                }
            }
        }

        return (int)cnt;
    }
};