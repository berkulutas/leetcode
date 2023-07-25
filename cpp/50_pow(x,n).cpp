class Solution {
public:
    double myPow2(double x, long int n) {
        double res = 1; 

        while (n) {
            if (n&1) 
                res *= x; 
            x = x*x; 
            n >>= 1;
        }
        return res;
    }

    double myPow(double x, int n) {
        double res = myPow2(x, abs(n));
        if (n>0) return res; 
        else return 1/res; 
    }
};