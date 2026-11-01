class Solution {
public:
    int maxDistinct(string s) {
        map<char,bool> mpp;
        for(char &c : s) mpp[c] = 1;
        return mpp.size();

    }
};