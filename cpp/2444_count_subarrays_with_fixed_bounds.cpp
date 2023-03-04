class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int leftbound = -1;
        int maxPos = -1; 
        int minPos = -1;
        long long int count = 0;


        for (int i=0; i<nums.size(); i++) {
            if ( minK <= nums[i] && nums[i] <= maxK) {
                if (nums[i] == maxK) maxPos = i;
                if (nums[i] == minK) minPos = i;
                count += max(0, min(minPos, maxPos) - leftbound);
            }
            else {
                leftbound = i; 
            }


        }

        return count;
    }
};