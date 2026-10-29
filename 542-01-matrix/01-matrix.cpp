class Solution {
    using ll = int;
    typedef vector<ll> vll;
    typedef vector<vector<ll>> vvll;
    typedef pair<pair<ll,ll>,ll> ds;
    #define fi first
    #define se second
public:

    vector<pair<ll,ll>> d = {{1,0},{-1,0},{0,1},{0,-1}};


    vector<vector<int>> updateMatrix(vector<vector<int>>& v) {
        ll m = v.size();
        ll n = v[0].size();
        vvll grid(m, vector<int>(n, -1));
        vvll vis(m, vector<ll>(n, 0));

        queue<ds> q;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(!v[i][j]){
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                    grid[i][j] = 0;
                }
            }
        }
        while(!q.empty()){
            ds t = q.front();
            ll i = t.fi.fi;
            ll j = t.fi.se;
            ll dd = t.se;
            q.pop();
            for(auto &[dr,dc] : d){
                if(i+dr<0 || j + dc<0 || i+dr>=m || j + dc >=n) continue;
                ll r = i+dr, c = j+dc;
                if(!vis[r][c]){
                    vis[r][c] = 1;
                    grid[r][c] = dd+1;
                    q.push({{r,c}, dd+1});
                }
            }
        }
        return grid;
    }
};