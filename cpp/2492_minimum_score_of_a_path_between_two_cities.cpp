class Solution {
#define MAXD 1e5+5
public:
    vector<int> parent;
    
    int find_parent(int v) {
        if (v == parent[v])
            return v; 
        return parent[v] = find_parent(parent[v]); // parent[v] = find_parent[v] 
    }

    void union_set(int a, int b) {
        a = find_parent(a);
        b = find_parent(b);
        if (a!=b)   
            parent[b] = a; 
    }

    int minScore(int n, vector<vector<int>>& roads) {
        int minS = MAXD;
        parent.resize(n+1);
        for (int i=1; i<=n; i++)
            parent[i] = i;
        for (int i=0; i<roads.size(); i++) {
            union_set(roads[i][0], roads[i][1]);
        }
        for (int i=0; i<roads.size(); i++) {
            if (find_parent(roads[i][0]) == find_parent(1)) 
                minS = min(minS, roads[i][2]);
        }
        return minS; 
    }
};