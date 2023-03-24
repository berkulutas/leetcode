class Solution {
public:
    int res;
    vector<vector<pair<int, bool>>> adj;
    vector<bool> visited;
    void dfs(int v) {
        visited[v] = 1; 
        for(auto u: adj[v]) {
            if (!visited[u.first]) {
                if (!u.second) res++; 
                dfs(u.first);
            }

        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        adj.resize(n);
        visited.resize(n);
        for(auto w: connections) {
            adj[w[0]].push_back(make_pair(w[1],0));
            adj[w[1]].push_back(make_pair(w[0],1));
        }
        dfs(0);
        return res; 
    }
};