class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                int start = st.top();
                st.pop();
                reverse(s.begin() + start + 1, s.begin() + i);
            }
        }
        
        string res;
        for (char c : s) {
            if (c != '(' && c != ')') {
                res += c;
            }
        }
        
        return res;
    }
};