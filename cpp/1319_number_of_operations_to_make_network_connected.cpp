class Solution {
public:
    vector<int> parents;
    int find_parent(int v) {
        if (parents[v] == v) return v;
        return parents[v] = find_parent(parents[v]); 
    }
    void union_set(int a, int b) {
        a = find_parent(a);
        b = find_parent(b);
        if (a!=b)
            parents[b] = a;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int conSize= connections.size();
        if ((n-1) > conSize) return -1; // not possible
        parents.resize(n);
        for (int i=0; i<n; i++)
            parents[i] = i;
        
        for (int i=0; i<conSize; i++)
            union_set(connections[i][0], connections[i][1]);

        unordered_set<int> s;
        int cc = 0; 
        for (int i=0; i<n; i++) {
            if (s.count(find_parent(i)) == 0) {
                s.insert(find_parent(i));
                cc++;
            }
        }
        return cc-1; 
    }
};