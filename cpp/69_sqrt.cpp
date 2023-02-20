class Solution {
public:
#define ll long long
    int mySqrt(int x) {
        ll int right = x;
        ll int left = 0;
        ll int mid = (right + left)/2;

        while(left + 1 < right) {
            // cout << "l: " << left << " m: " << mid << " r: " << right <<"\n"; 
            if (mid*mid > x)
                right = mid;
            else if (mid*mid < x)
                left = mid;
            else
                return mid;
            
            mid = (right + left)/2;
        }
        return (right*right <= x) ? right : left; 
    }
};