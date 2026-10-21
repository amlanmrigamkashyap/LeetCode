class Solution {
    typedef long long ll;
    typedef vector<ll> vll;
    typedef vector<vll> vvll;
    typedef pair<ll,ll> pll;
    #define fi first
    #define se second
public:

    vector<pll> d = {{1,0},{-1,0},{0,1},{0,-1}};

    int orangesRotting(vector<vector<int>>& grid) {
        ll m = grid.size();
        ll n = grid[0].size();

        vvll time(m, vll(n,0));

        for(ll i = 0; i<m; i++){
            for(ll j = 0; j<n; j++){
                if(grid[i][j] == 1) time[i][j] = -1;
            }
        }

        queue<pll> q;
        for(ll i = 0; i<m; i++){
            for(ll j = 0; j<n; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            pll top = q.front();
            q.pop();
            for(auto &[dx,dy] : d){
                ll y = top.fi + dy, x = top.se + dx;
                if(x<0||y<0||x>=n||y>=m) continue;
                if(grid[y][x]==1){
                    q.push({y,x});
                    grid[y][x] = 2;
                    time[y][x] = time[top.fi][top.se]+1;
                }
            }
        }

        ll tt = -1;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(time[i][j]==-1) return -1;
                else tt = max(tt, time[i][j]);
            }
        }

        return tt;

    }
};