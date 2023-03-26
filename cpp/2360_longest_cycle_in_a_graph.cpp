class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int res = -1, currTime=1; 
        int size = edges.size(); 
        vector<int> whichTimeVisited(size, 0);

        for(int i=0; i<size; i++) {
            if (whichTimeVisited[i] > 0) continue;

            int startTime=currTime;
            int node = i;
            while(node!=-1 && whichTimeVisited[node] == 0) {
                whichTimeVisited[node] = currTime++; 
                node = edges[node];
            }

            if (node!=-1 && whichTimeVisited[node] >= startTime) {
                res = max(res, currTime-whichTimeVisited[node]);
            }

        }
        return res; 
    }
};