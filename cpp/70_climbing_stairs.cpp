class Solution {
public:
    int climbStairs(int n) {
            if (n == 1) return 1;
            if (n == 2) return 2;

            int n_1 = 1; 
            int n_2 = 2;
            int last = n_1+n_2;

            for(int i = 3; i<=n; i++) {
                last = n_1 + n_2;
                n_1 = n_2; 
                n_2 = last; 
            }

            return last;
    }
};