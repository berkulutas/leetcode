class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int size = nums.size();
        int oneCount = 0; 

        for (int i=0; i<size; i++) {
            if (nums[i] == 1) 
                oneCount++;
        }

        int left=0, right=oneCount;
        int swapCount=0;
        for (int i=left; i<right; i++) {
            if (nums[i] == 0)
                swapCount++;
        }

        int res = swapCount; 

        for (int n=0; n<size; n++) {
            if (nums[left] == 0 ) 
                swapCount--; 

            left++; right++; 
            if (nums[(right-1)%size] == 0)
                swapCount++;

            res = min(swapCount, res);
        }
        return res;
    }
};