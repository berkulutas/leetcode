class Solution {
public:

int singleNonDuplicate(vector<int>& nums) {
    int l = 0; 
    int r = nums.size()-1;
    int m;

    while(l != r) {
        m = (l+r)/2;
        // printf("left: %d\nmid: %d\nright: %d\n", l,m,r);
        if ((nums[m] != nums[m-1]) && (nums[m] != nums[m+1]))
            return nums[m];
        // even 
        if (m%2 == 0) {
            if (nums[m-1] == nums[m])
                r = m-2;
            else
                l = m+2;
        }
        // odd
        else {
            if (nums[m] == nums[m-1])
                l = m+1;
            else
                r = m-1;
        }

    }
    m = (l+r)/2;
    // printf("left: %d\nmid: %d\nright: %d\n", l,m,r);

    return nums[m];
}
};