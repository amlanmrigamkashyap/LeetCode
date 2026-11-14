class Solution {
    using ll = long long;
    typedef vector<ll> vll;
private :
    bool check(ll n, vector<vector<int>>& graph, vll &vis){
        queue<ll> q;
        q.push(n);
        vis[n] = 1;
        while(!q.empty()){
            ll t = q.front();
            q.pop();
            for(auto &x : graph[t]){
                if(vis[x] == -1){
                    q.push(x);
                    vis[x] = !vis[t];
                }
                else if(vis[x] == vis[t]){
                    return false;
                }
            }
        }
        return true;

    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        ll n = graph.size();
        vll vis(n,-1);
        for(ll i = 0; i<n; i++){
            if(vis[i]==-1){
                if(!check(i, graph, vis)) return false;
            }
            
        }
        return true;
        
    }
};