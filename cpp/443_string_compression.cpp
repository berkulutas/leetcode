class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        int last = 0;
        char check = chars[0];
        int count = 1; 

        for (int i=1; i<=size; i++) {
            if (i == size || chars[i] != check) {
                if (count > 1) {
                    string cstr = to_string(count);
                    chars[last++] = check; 
                    for (int c=0; c<cstr.size(); c++) {
                        chars[last++] = cstr[c];
                    }
                }
                else chars[last++] = check;
                if (i == size) break; 
                check = chars[i];
                count = 1;
            }
            else count++; 
        }

        return last; 
    }
};