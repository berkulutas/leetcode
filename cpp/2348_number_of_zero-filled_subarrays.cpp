class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0;
        long long conseqZero = 0;

        for(int i=0; i<nums.size(); i++) {
            if (nums[i] == 0) {
                conseqZero++; 
            }
            else {
                res += (conseqZero*(conseqZero+1))/2;
                conseqZero = 0; 
            }
        }
        res += (conseqZero*(conseqZero+1))/2;
        return res;
    }
};