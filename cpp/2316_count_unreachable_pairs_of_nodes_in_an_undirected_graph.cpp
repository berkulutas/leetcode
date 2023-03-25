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

    long long countPairs(int n, vector<vector<int>>& edges) {
        parents.resize(n);
        for(int i=0; i<n; i++) {
            parents[i] = i;
        }
        for (auto edge : edges) {
            union_set(edge[0], edge[1]);
        }
        unordered_map<int, int> compSize; 
        for(int i=0; i<n; i++) {
            compSize[find_parent(i)]++; 
        }

        long long numberPaths = 0;
        for(auto comp : compSize) {
            numberPaths+= (long long)comp.second * (n-comp.second);
        }

        return numberPaths/2; 
    }
};