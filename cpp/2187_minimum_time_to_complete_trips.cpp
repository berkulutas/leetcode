class Solution {
public:
    int tt;
    bool f(vector<int> &time, long long t) {
        long long int res= 0 ;
        for (auto i : time) 
            res += t/i;
        // cout << "res= " << res << endl;
        return tt <= res; 
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        tt = totalTrips;
        int mini = INT_MAX;
        int maxi = -1; 
        for (auto w : time) {
            mini = min(mini,w);
            maxi = max(maxi,w); 
        }
        long long l = 1; 
        long long r = (long long)mini*totalTrips;

        while (l < r) {
            long long mid = l + (r-l)/2;
            // cout << l << " " << mid << " " << r << endl; 
            if (f(time, mid) == false) l = mid+1;
            else r = mid;
        }
        return l; 
    }
};