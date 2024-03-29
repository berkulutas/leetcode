// ()[]{}
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (auto c: s) {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else if (!st.empty() && (c == st.top()+1 || c== st.top()+2)) st.pop();
            else return false;
        }

        return st.empty();
            

    }
};