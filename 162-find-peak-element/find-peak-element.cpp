class Solution {
    using ll = long long;
public:
    int findPeakElement(vector<int>& v) {
        // ll ans;
        ll n = v.size();
        ll l = 0, h = n-1;
        while(l<=h){
            ll m = l + (h-l)/2;
            // ans = m;
            if((m==n-1?1:v[m]>v[m+1]) && (m==0?1:v[m]>v[m-1])) return m;
            else if((m==0?1:v[m]>=v[m-1]) && (m==n-1?0:v[m]<=v[m+1])) l = m+1;
            // else if((m==0?0:v[m-1]>=v[m])&&(m==n-1?1:v[m+1]<=v[m]))h = m -1;
            else h = m-1;
        }
        return -1;
    }
};