class Solution {
public:
    int minJumps(vector<int>& arr) {
        int size = arr.size();
        unordered_map<int, vector<int>> umap;
        for (int i=0; i<size; i++) {
            umap[arr[i]].push_back(i);
        }

        queue<int> q;
        vector<bool> visited(size,0);
        q.push(0);
        visited[0] = 1; 
        int jump = 0; 

        while(!q.empty()) {
            int qsize = q.size();
            while (qsize--) {
                int popped = q.front(); q.pop();
                if (popped == size-1) return jump;
                
                if ((0<=popped+1 && popped+1<=size) && !visited[popped+1]) {
                    q.push(popped+1);
                    visited[popped+1] = true; 
                }
                if ((0<=popped-1 && popped-1<=size) && !visited[popped-1]) {
                    q.push(popped-1);
                    visited[popped-1] = true; 
                }
                
                for (auto tmp : umap[arr[popped]]) {
                    if (!visited[tmp]) {
                        q.push(tmp);
                        visited[tmp] = true;
                    }
                }
                umap[arr[popped]].clear();

            }
            jump++; 
        }

        return -1; 
    }
};