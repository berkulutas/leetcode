class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int size = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());

        int ans = 0; 
        int cum_sum = 0; 

        for(int i=size-1; i>=0; i--) {
            ans = max(ans+cum_sum+satisfaction[i], ans);
            cum_sum += satisfaction[i];
        }
        return ans;
    }
};