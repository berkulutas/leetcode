class Solution {
public:
    int strStr(string haystack, string needle) {
        int hsize = haystack.size();
        int nsize = needle.size();
        int res = -1; 

        for (int i=0; i<=hsize-nsize; i++) {
            bool flag = 0; 
            for (int j=0, k=i; j<nsize; j++, k++) {
                if (needle[j] != haystack[k])
                    flag = 1;
            }
            if (!flag) {
                res = i; 
                break; 
            } 
        }
        return res; 
    }
};