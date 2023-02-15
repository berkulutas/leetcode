class Solution {
public:
#define ll long long

    ll mySqrt(ll x) {

        for (ll i = 0; i < x+1; i++) {
            if (i*i == x) {
                return i; 
            }
            else if (i*i > x) {
                return i-1;
            }

        }
        return 0; 
            
    }
};