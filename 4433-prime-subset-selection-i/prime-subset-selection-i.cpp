class Solution {
    bool prime(int n){
        for(int i = 2; i*i<=n;  i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
public:
    vector<int> maxPrimes(int n, int s) {
        vector<int> v;
        for(int i = 2; i<=n ;i++){
            if(prime(i)){
                if(i<=s){
                    v.push_back(i);
                    s-=i;
                }
                else break;
            }
        }
        return v;
    }
};