class Solution {
public:
    string convertToTitle(int columnNumber) {
            string res;

            while (columnNumber > 0) {
                if ((columnNumber % 26) == 0) {
                    res += 'Z';
                    columnNumber--;
                }
                else {
                    res += (char)(columnNumber % 26) + 64;
                }
                columnNumber /= 26; 
            }
            reverse(res.begin(), res.end());
            return res; 
            
    }
};