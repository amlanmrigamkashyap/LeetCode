class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, h = arr.size()-1, ans = -1;
        while(l<=h){
            int m = l + (h-l)/2;
            ans = arr[m];
            if(arr[m]>(m==0?0:arr[m-1]) && arr[m]>arr[m+1]) return m;
            else if(arr[m]>arr[m+1] && (m==0?0:arr[m-1])>arr[m]) h = m-1;
            else l = m + 1;
        }
        return ans;
    }
};