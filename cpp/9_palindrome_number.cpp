class Solution {
public:
    bool isPalindrome(int x) {
        int tmp = x; 
        unsigned int y = 0;
        while (tmp>0) {
            y*=10; 
            y += tmp%10; 
            tmp/=10;
        }
        return x == y;   
    }
};