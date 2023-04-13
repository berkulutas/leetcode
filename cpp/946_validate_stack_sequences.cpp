class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int size = pushed.size();
        
        for (int i=0,j=0; i<size; i++) {
            s.push(pushed[i]);

            while(!s.empty() && popped[j] == s.top()) {
                s.pop(); j++; 
            }

        }
        return s.empty(); 
    }
};