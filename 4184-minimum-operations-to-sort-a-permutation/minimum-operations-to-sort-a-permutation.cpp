class Solution {
    using ll = long long;
public:
    int minOperations(vector<int>& v) {
        ll n = v.size();
        ll mn = -1, mx = -1;
        ll men = 1e9, mex = -1e9;


        for(int i = 0 ; i<n; i++){
            if(v[i]<men){
                men = v[i];
                mn = i;
            }
            if(v[i]>mex){
                mex = v[i];
                mx = i;
            }
        }

        if(n==2) return (mn==0?0:1);

        ll p = 1, q = 1;//p shows inc, q shows dec

        //inc Check:
        for(int i = mn+1; i<mn+n; i++){
            ll se = i%n, fi = (i-1+n)%n;
            if(v[se]<v[fi]){
                p = 0;break;
            }
        }
        //dec Check: 
        for(int i = mx+1; i<mx+n; i++){
            ll se = i%n, fi = (i-1+n)%n;
            if(v[se]>v[fi]){
                q = 0;break;
            }
        }

        if(!p && !q) return -1;

        ll moves = -1;

        if(p){
            moves = min(mn, n-1-mx + 2);
        }
        else moves = min(1 + n-1-mn, mx + 1);


        return moves;


    }
};