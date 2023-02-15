class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int l = 0;
        int r = size-1; 
        int mid = (r +l )/2;
        // cout << mid << "\n";
        // cout << l << "\n";
        // cout << r << "\n";
        bool flag = 0;

        if (target > nums[r]) {
            return r+1;
        }
        if (target <= nums[l]) {
            return l;
        }

        while (r-l>=1) {

            if (nums[mid] == target || nums[r] == target) {
                if (nums[r] == target) mid = r;
                flag = 1;
                break;
            }
            if (target >= nums[mid]) {
                l = mid;
                mid = (r + l )/2; 
            }
            else {
                r= mid;
                mid = (r+l)/2; 
            }
            if (r-l ==1 ) {
                break;
            }
           
        }
        if (flag)
            return mid; 
        else 
            return  mid + 1; 
    }
};