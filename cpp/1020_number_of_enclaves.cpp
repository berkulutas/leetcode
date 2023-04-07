class Solution {
public:
    vector<vector<bool>> visited;
    int rsize, csize; 
    void bfs(vector<vector<int>> &grid, int x, int y) {
        if (visited[x][y] || grid[x][y] == 0) return;

        queue<pair<int,int>> q;
        q.push({x,y});
        visited[x][y] = true;

        while(!q.empty()) {
            auto popped = q.front(); q.pop();

            int xi[] = {-1,0,1,0};
            int yi[] = {0,-1,0,1};

            for (int k=0; k<4; k++) {
                int i = popped.first + xi[k];
                int j = popped.second + yi[k];
                if (!(i>=0 && i<rsize && j>=0 && j<csize)) continue;
                if (grid[i][j] == 1 && visited[i][j] == false) {
                    visited[i][j] = true;
                    q.push({i,j});
                }
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        rsize = grid.size(), csize = grid[0].size();
        visited.resize(rsize);
        for(auto &v: visited)
            v.resize(csize, false);
        
        for (int i=0; i<rsize; i+=rsize-1) {
            for (int j=0; j<csize; j++) {
                bfs(grid, i, j);
            }
        }

        for (int i=0; i<rsize; i++) {
            bfs(grid, i,0);
            bfs(grid, i, csize-1);
        }
        
        int ans = 0; 
        for (int i=0; i<rsize; i++) {
            for (int j=0; j<csize; j++) {
                if (grid[i][j] == 1 && visited[i][j] == false) ans++; 
            }
        }
        return ans;
    }
};
