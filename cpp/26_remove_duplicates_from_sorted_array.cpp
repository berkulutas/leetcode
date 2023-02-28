class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = 0; 
        int next = 1;

        for (; next < nums.size(); next++) {
            if (nums[last] != nums[next]) {
                last++;
                swap(nums[last], nums[next]);
            }
        }
        return last+1; 

    }
};