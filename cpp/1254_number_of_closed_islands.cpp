class Solution {
public:
    vector<vector<bool>> visited;
    int rsize, csize; 
    bool bfs(vector<vector<int>>& grid, int i, int j) {
        if (grid[i][j] == 1 || visited[i][j] == true) return false;
        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j] = true;
        bool flag = true; 

        while(!q.empty()) {
            auto popped = q.front(); q.pop();
            int xi = popped.first, xj = popped.second;
            if((xi==0) || (xi == rsize-1) || (xj == 0) || (xj == csize-1)) 
                flag = false; 
            
            //left
            if(xj-1>=0 && !visited[xi][xj-1] && grid[xi][xj-1] == 0) {
                q.push({xi,xj-1});
                visited[xi][xj-1] = true; 
            }
            //right
            if(xj+1<csize && !visited[xi][xj+1] && grid[xi][xj+1] == 0) {
                q.push({xi,xj+1});
                visited[xi][xj+1] = true; 
            }
            //up
            if(xi-1>=0 && !visited[xi-1][xj] && grid[xi-1][xj] == 0) {
                q.push({xi-1,xj});
                visited[xi-1][xj] = true; 
            }
            //down
            if(xi+1<rsize && !visited[xi+1][xj] && grid[xi+1][xj] == 0) {
                q.push({xi+1,xj});
                visited[xi+1][xj] = true; 
            }
        }
        return flag; 
    }
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        rsize = grid.size();
        csize = grid[0].size();
        visited.resize(rsize);
        for (int i=0; i<rsize; i++)
            visited[i].resize(csize, false);
        

        for (int i=0; i<rsize; i++) {
            for (int j=0; j<csize; j++) {
                if (bfs(grid, i, j)) ans++;
            }
        }
        return ans; 
    }
};