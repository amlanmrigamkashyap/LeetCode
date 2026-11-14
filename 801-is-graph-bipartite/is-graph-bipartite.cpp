class Solution {
    using ll = int;
    typedef vector<ll> vll;
    typedef vector<vll> vvll;

private:
    bool dfs(ll n, ll color, vvll &graph, vll &vis){
        cout<< n << " ";
        vis[n] = color;
        for(auto &x : graph[n]){
            if(vis[x] == -1 && !dfs(x, !color, graph, vis)) return false;
            else if(vis[x] == color) return false;
        }
        cout<< n << "done ";
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        ll n = graph.size();
        vll vis(n,-1);
        for(ll i = 0; i<n; i++){
            if(vis[i] == -1 && !dfs(i, 0, graph, vis)){
                return false;
            }
        }
        
        return true;
    }
};