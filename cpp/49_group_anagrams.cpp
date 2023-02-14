class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> umap;
        int vcount = 0; // to track vector<string> in res


        for (int i = 0; i<strs.size(); i++) {
            // cout << strs[i] << " ";
            auto tmp = strs[i];
            sort(tmp.begin(), tmp.end()); // sort it is easy to check anagram
            if (umap.find(tmp) != umap.end()) {
                res[umap[tmp]].push_back(strs[i]);
            }
            else {
                umap[tmp] = vcount++; 
                vector<string> tmp2;
                tmp2.push_back(strs[i]);
                res.push_back(tmp2);
            }
        }

        return res; 
    }
};