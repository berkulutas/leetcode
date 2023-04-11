class Solution {
public:
    void recurs(string &s, stack<char> &st) {
        if (st.empty()) return; 
        char c = st.top(); st.pop();
        recurs(s,st);
        s+=c; 
    }
    string removeStars(string s) {
        // int size = s.size();
        stack<char> st;
        for (auto c: s) {
            if (c == '*') st.pop();
            else st.push(c);
        }
        string ans;
        recurs(ans, st);
        return ans; 
    }
};