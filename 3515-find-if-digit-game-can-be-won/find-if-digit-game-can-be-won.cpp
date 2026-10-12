class Solution {
public:
    bool canAliceWin(vector<int>& v) {

        int s1=0, s2=0;
        int n = v.size();

        int s = 0;
        for(int i = 0; i<n; i++){
            s += v[i];
        }

        for(int i = 0; i<n; i++){
            if(v[i]/10 && !(v[i]/100)) s2+=(v[i]);
            else if(!(v[i]/10)) s1+=(v[i]);
        }

        cout<< s1 <<" "<< s2 << " " << s;

        if(s1>(s-s1) || s2>(s-s2)) return 1;
        else return 0;

    }
};