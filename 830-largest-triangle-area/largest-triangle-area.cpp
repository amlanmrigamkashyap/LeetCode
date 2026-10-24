class Solution {
    typedef vector<int> vll;
    double area(vll p, vll q,vll r){
        double a = (sqrt((p[0] - q[0])*(p[0] - q[0])+(p[1] - q[1])*(p[1] - q[1])));
        double c = (sqrt((p[0] - r[0])*(p[0] - r[0])+(p[1] - r[1])*(p[1] - r[1])));
        double b = (sqrt((r[0] - q[0])*(r[0] - q[0])+(r[1] - q[1])*(r[1] - q[1])));

        double s = (a+b+c)/2;

        return (sqrt(s*(s-a)*(s-b)*(s-c)));
    }
public:
    double largestTriangleArea(vector<vector<int>>& v) {
        int n = v.size();
        double maxm = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n;j++){
                for(int k = j+1; k<n; k++){
                    maxm = max(maxm, area(v[i],v[j],v[k]));
                }
            }
        }
        return maxm;
    }
};