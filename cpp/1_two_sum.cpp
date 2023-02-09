class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // check element's complement in map

        // if add indices to result arr, else add element and index to map

        vector<int> res;
        unordered_map<int, int> umap; 

        for (int i = 0; i<nums.size(); i++) {
            auto tmp = umap.find(target - nums[i]); 
            
            if (tmp != umap.end()) { // check element's complement in map
                res.push_back(i); // current element's index
                res.push_back((*tmp).second); // complement's index
                break; 

            }
            else {
                umap.insert(make_pair(nums[i], i)); // add element with index
            }
        }

        return res; 
    }
};