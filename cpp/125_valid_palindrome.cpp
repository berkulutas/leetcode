class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size();
        int diff = 'a' - 'A';
        while(!isalnum(s[start]) && start < end) start++;
        while(!isalnum(s[end]) &&  end > start) end--; 

        while (start < end) {
            // cout << s[start] << s[end];
            if (s[start] == s[end] || (isalpha(s[start]) && isalpha(s[end]) && (abs(s[start]-s[end]) == diff)) ) {
                start++; 
                end--; 
                while(!isalnum(s[start])) start++; 
                while(!isalnum(s[end])) end--; 
            }
            else {
                return 0; 
            }
        }
        return 1; 
    }
};