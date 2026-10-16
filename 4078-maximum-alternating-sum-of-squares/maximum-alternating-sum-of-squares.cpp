class Solution {
    using ll = long long;
// public:
    static bool cmp(int a, int b){
        return abs(a)<=abs(b);
    }
public:
    long long maxAlternatingSum(vector<int>& v) {
        ll n = v.size(), score = 0;
        sort(v.begin(), v.end(), [](int a, int b){
            return abs(a)<abs(b);
        });
        ll l = 0, h = n-1;
        while(l<=h){
            score += v[h]*v[h];
            if(l!=h) score -= v[l]*v[l];
            h--;l++;
        }
        return score;
        
    }
};