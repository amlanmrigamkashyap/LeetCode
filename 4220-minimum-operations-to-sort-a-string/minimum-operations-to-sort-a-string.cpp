class Solution {
    bool check(string &s){
        for(int i = 1; i<s.size(); i++){
            if(s[i]<s[i-1]) return false;
        }
        return true;
    }
public:
    int minOperations(string s) {
        if(s.size()==2 && !check(s)) return -1;

        if(check(s)) return 0;

        string s1 = s, s2 = s, s3 = s, s4 = s;


        sort(s1.begin(), s1.end()-1);
        sort(s2.begin()+1, s2.end());

        if(check(s1)||check(s2)) return 1;

        sort(s3.begin(), s3.end()-1);
        sort(s3.begin()+1, s3.end());

        sort(s4.begin()+1, s4.end());
        sort(s4.begin(), s4.end()-1);

        if(check(s3)||check(s4)) return 2;
        else return 3;

    }
};