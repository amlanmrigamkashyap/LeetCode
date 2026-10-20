class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() -1, j = num2.size() - 1, carry = 0;
        string ans;
        while(i>=0 || j>=0 || carry){
            int d = 0;
            if(i>=0) d += (num1[i]-'0');
            if(j>=0) d += (num2[j]-'0');
            if(carry) d += carry;
            carry = d/10;
            d%=10;
            ans += (char)(d+'0');
            i--; j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};