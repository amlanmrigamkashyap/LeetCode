class Solution {
    using ll = long long;
public:
    int evalRPN(vector<string>& tokens) {
        stack<ll> st;
        for(auto &x: tokens){
            if(x == "+"){
                ll temp = st.top();
                st.pop();
                ll p = st.top() + temp;
                st.pop();
                st.push(p);
            }
            else if(x == "-"){
                ll temp = st.top();
                st.pop();
                ll p = st.top() - temp;
                st.pop();
                st.push(p);
            }
            else if(x == "*"){
                ll temp = st.top();
                st.pop();
                ll p = st.top() * temp;
                st.pop();
                st.push(p);
            }
            else if(x == "/"){
                ll temp = st.top();
                st.pop();
                ll p = st.top() / temp;
                st.pop();
                st.push(p);
            }
            else{
                ll p = stoll(x);
                st.push(p);
            }
        }
        return st.top();
    }
};