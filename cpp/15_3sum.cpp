class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> result; 

        for(int i = 0; i<size-2; i++) {
            if (i>0 && nums[i] == nums[i-1])
                continue;
            int l = i+1;
            int r = size-1;
            int target = nums[i]*-1;
            while(l < r) {
                if (nums[l] + nums[r] > target)
                    r--;
                else if (nums[l] + nums[r] < target)
                    l++;
                else {
                    // vector<int> tmp = {nums[i], nums[l], nums[r]};
                    result.push_back({nums[i], nums[l], nums[r]});
                    l++; 
                    while (nums[l] == nums[l-1] && l < r)
                        l++; 
                }
            }

        }
        return result;
    }
};