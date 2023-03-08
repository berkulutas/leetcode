class Solution {
public:
    int hour; 
    bool f(vector<int> &piles, int &h) {
        int tmp = 0; 
        for (auto w : piles) {
            if (w%h) {
                tmp += w/h +1;
            }
            else tmp += w/h;
        }
        // cout << tmp << " " << hour << endl; 
        return tmp <= hour; 
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        hour = h;
        int l = 1; 
        int r = 0;

        for (auto w : piles)
            r = max(r,w);

        while(l<r) {
            int mid = l+(r-l)/2;
            printf("%d %d %d\n", l , mid, r);
            if (f(piles, mid))
                r = mid;
            else 
                l = mid+1; 
        }
        return l; 
    }
};