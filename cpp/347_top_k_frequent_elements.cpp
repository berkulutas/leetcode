class Solution {
public:
    static bool mySort(pair<int, int> a, pair<const int, int> b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
            map<int, int> m;
            for (auto i : nums) {
                m[i] +=1; 
            }
            vector<pair<int, int>> vec; 
            for (auto itr : m) {
                vec.push_back(itr);
            }

            sort(vec.begin(), vec.end(), mySort);

            vector<int> res; 
            auto itr = vec.begin();
            for (int i = 0; i < k; i++) {
                res.push_back(vec[i].first);
            }

            return res;
    }
};