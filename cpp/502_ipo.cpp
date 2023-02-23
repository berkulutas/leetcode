class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        priority_queue<int> pq; 
        vector<pair<int,int>> projects(n);

        for (int i = 0; i<n; i++) {
            projects[i] = make_pair(capital[i], profits[i]);
        }
        sort(projects.begin(), projects.end());
        
        auto itr = projects.begin(); 
        while (k > 0) {
            while(itr != projects.end() && (*itr).first <= w) {
                pq.push((*itr).second);
                itr++; 
            }

            if (!pq.empty()) {
                w += pq.top();
                pq.pop();
                k--; 
            }
            else break; 
        }

        return w;
    }
};