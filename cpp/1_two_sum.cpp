class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> umap; 

        for (int i = 0; i<nums.size(); i++) {
            // cout << nums[i] << " " << target - nums[i] << "\n";
            auto tmp = umap.find(target - nums[i]); 
            if (tmp != umap.end()) {
                // cout << "found " << nums[i] << " " <<(*tmp).first << "\n";
                res.push_back(i);
                res.push_back((*tmp).second);
                break; 

            }
            else {
                // cout << "else " << nums[i] << " " << i << "\n";
                umap.insert(make_pair(nums[i], i));
            }
        }

        return res; 
    }
};