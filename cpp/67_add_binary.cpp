class Solution {
public:

    string addBinary(string a, string b) {
        string result;

        // make sure a is biggger
        int alen = a.length()-1;
        int blen = b.length()-1;
        if (alen < blen) {
            swap(a,b);
            swap(alen, blen);
        }

        bool c = 0; // to track carry

        while (blen>=0) {
            if (a[alen] == '1' && b[blen] == '1') {
                if (c) {
                    result = "1" + result;
                    c = 1;
                }
                else {
                    result = "0" + result;
                    c = 1;
                }
            }
            else if (a[alen] == '0' && b[blen] == '0') {
                if (c) {
                    result = "1" + result;
                    c = 0; 
                }
                else {
                    result = "0" + result;
                    c = 0; 
                }
            }
            else {
                if (c) {
                    result = "0" + result;
                    c = 1;
                }
                else {
                    result = "1" + result; 
                    c = 0; 
                }
            }
            alen--; 
            blen--; 
        }

        while (alen>=0) {
            if (a[alen] == '1') {
                if (c) {
                    result = "0" + result;
                    c = 1;
                }
                else {
                    result = "1" + result;
                    c = 0; 
                }
            }
            else {
                if (c) {
                    result = "1" + result;
                    c = 0; 
                }
                else {
                    result = "0" + result; 
                    c = 0; 
                }
            }
            alen--;
        }

        

        if (c) result = "1" + result;

        return result; 
    }
};