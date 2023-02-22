class Solution {
public:
    bool isPossible(vector<int>& weights, int capacity, int days) {
        int usedDays = 1; 
        int currWeight = 0; 

        for (auto w : weights) {
            currWeight += w;
            if (currWeight > capacity) {
                usedDays++; 
                currWeight = w;
            }
        }

        return (usedDays <= days);
    }

    int shipWithinDays(vector<int>& weights, int days) { 
        int sum = 0; 
        int maxi = -1;
        for (auto i : weights) {
            sum += i;
            maxi = max(maxi,i);
        }
        
        int daily_avg = sum/days;
        int l = max(daily_avg, maxi);
        int r = min(daily_avg + maxi, sum);

        while(l < r) {
            int mid = (l+r)/2; 
            if (isPossible(weights, mid, days)){
                r = mid;
            }
            else {
                l = mid+1;
            }
        }
        return l;
    }
};