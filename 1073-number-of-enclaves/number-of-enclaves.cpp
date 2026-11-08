class Solution {
    using ll = long long;
    typedef vector<vector<ll>> vvll;
    typedef vector<ll> vll;
    typedef pair<ll,ll> pll;
    #define fi first
    #define se second

    vector<pll> d = {{1,0},{0,1},{-1,0},{0,-1}};

    void bfs(ll i, ll j,vector<vector<int>> &v, vvll &vis){
        ll m = v.size();
        ll n = v[0].size();
        queue<pll> q;
        q.push({i,j});
        vis[i][j] = 1;
        
        while(!q.empty()){
            pll t = q.front();
            q.pop();
            for(auto &[dx,dy]:d){
                if(t.fi+dy<0||t.fi+dy>=m||t.se+dx<0||t.se+dx>=n) continue;
                if(!vis[t.fi+dy][t.se+dx] && v[t.fi+dy][t.se+dx] == 1){
                    q.push({t.fi+dy, t.se+dx});
                    vis[t.fi + dy][t.se + dx] = 1;
                }
            }
        }
    }

public:
    int numEnclaves(vector<vector<int>>& v) {
        ll m = v.size();
        ll n = v[0].size();

        vvll vis(m, vll(n,0));

        for(ll j = 0; j<n; j++){
            if(!vis[0][j] && v[0][j]==1){
                bfs(0,j,v,vis);
            }    
            if(!vis[m-1][j] && v[m-1][j]==1){
                bfs(m-1,j,v,vis);
            }    
        }

        for(ll i = 1; i<m-1; i++){
            if(!vis[i][0] && v[i][0]==1){
                bfs(i,0,v,vis);
            }    
            if(!vis[i][n-1] && v[i][n-1]==1){
                bfs(i,n-1,v,vis);
            }    
        }

        ll cnt = 0;
        for(ll i = 1; i<m-1; i++){
            for(ll j = 1; j<n-1; j++){
                if(v[i][j]==1 && !vis[i][j]){
                    cnt++;
                    // cout<<"he";
                }
            }
        }
        return (int)cnt;
    }
};