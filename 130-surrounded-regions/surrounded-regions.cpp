class Solution {
    using ll = long long;
    typedef vector<ll> vll;
    typedef vector<vll> vvll;
    vector<pair<ll,ll>> d ={{1,0},{-1,0},{0,1},{0,-1}};
public:
    void dfs(ll i, ll j, vector<vector<char>>& v, vvll &vis){
        ll m = v.size();
        ll n = v[0].size();
        vis[i][j] = 1;
        for(auto &[dr,dc] : d){
            ll r = i + dr, c = j + dc;
            if(r == -1 || r==m || c == -1 || c==n) continue;
            if(v[r][c] == 'O' && !vis[r][c]) dfs(r,c,v,vis);
        }
    }
    void solve(vector<vector<char>>& v) {
        ll m = v.size();
        ll n = v[0].size();
        vvll vis(m, vll(n,0));

        for(ll j = 0; j<n; j++){
            if(!vis[0][j] && v[0][j]=='O'){
                dfs(0,j,v,vis);
            }    
            if(!vis[m-1][j] && v[m-1][j]=='O'){
                dfs(m-1,j,v,vis);
            }    
        }

        for(ll i = 1; i<m-1; i++){
            if(!vis[i][0] && v[i][0]=='O'){
                dfs(i,0,v,vis);
            }    
            if(!vis[i][n-1] && v[i][n-1]=='O'){
                dfs(i,n-1,v,vis);
            }    
        }

        for(ll i = 1; i<m-1; i++){
            for(ll j = 1; j<n-1; j++){
                // if(v[i][j]=='O') cout<<i<<j<<" ";
                if(v[i][j]=='O' && !vis[i][j]){
                    v[i][j]='X';
                    cout<<"he";
                }
            }
        }

        return;



    }
};