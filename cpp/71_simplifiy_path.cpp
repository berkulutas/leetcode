class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int size = path.size();
        for (int i=0; i<size; i++) {
                if (path[i] == '/')
                    continue;
                string tmp;
                while(i<size && path[i] != '/') {
                    tmp += path[i];
                    i++;
                }
                if (tmp == ".") continue; 
                else if (tmp == "..") {if(!st.empty()) st.pop();}
                else st.push(tmp);
        }

        string ans;
        if (st.empty()) return "/";
        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        return ans; 
    }
};