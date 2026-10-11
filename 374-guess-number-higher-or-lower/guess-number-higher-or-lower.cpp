/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
using ll = long long;
class Solution {
public:
    int guessNumber(int n) {
        ll h = (1LL<<31)-1, l = 1;
        int ans;
        while(l<=h){
            int m = l + (h-l)/2;
            int val = guess(m);
            ans = m;
            if(!val) return m;
            else if(val<0){
                h = m-1;
                // ans = h;
            }
            else{
                l = m+1;
                // ans = l;
            }
        }
        return ans;
    }
};