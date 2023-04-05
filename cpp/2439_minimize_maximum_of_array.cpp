class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int ans = nums[0];
        long long prefixSum = nums[0]; 
        for (int i=1; i<nums.size(); i++) {
            prefixSum += nums[i];
            ans = max(ans, (int)ceil((double)prefixSum/(i+1)));
        }
        return ans; 
    }
};