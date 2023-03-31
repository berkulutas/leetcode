class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int lmax = 0, rmax = 0, ans = 0; 
        int l = 0, r = size -1; 

        while(l < r) {
            if (height[l] > lmax ) lmax = height[l];
            if (height[r] > rmax ) rmax = height[r];

            if (lmax < rmax) {
                ans += max(lmax - height[l++], 0);
            }
            else {
                ans += max(rmax- height[r--], 0);
            }
        }
        return ans; 
    }
};