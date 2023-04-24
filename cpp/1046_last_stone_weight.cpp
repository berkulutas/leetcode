class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (auto s : stones)
            pq.push(s);
        int x, y;
        while(pq.size()>1) {
            y=pq.top(); pq.pop();
            x=pq.top(); pq.pop();
            if (x != y) 
                pq.push((y-x));
        }

        if (pq.empty()) return 0;
        return pq.top();
    }
};