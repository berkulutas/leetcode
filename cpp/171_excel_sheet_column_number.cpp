class Solution {
public:
    int titleToNumber(string columnTitle) {
        unsigned int res = 0; 
        for (int i = 0; i<columnTitle.length(); i++) 
            res = res*26 + columnTitle[i] - 64;
            
        return res; 
    }
};