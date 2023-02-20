class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> leftProduct(size);
        vector<int> rightProduct(size);
        leftProduct[0] = 1;
        rightProduct[size-1] = 1;

        for (int i = 1; i<size; i++) {
            leftProduct[i] = leftProduct[i-1] * nums[i-1];
            rightProduct[(size-1)-i] = rightProduct[(size-1) - (i-1)] * nums[(size-1) - (i-1)];
        }
        vector<int> output(size);
        for (int i = 0; i<size; i++) {
            output[i] = leftProduct[i] * rightProduct[i];
        }

        return output;
    }
};