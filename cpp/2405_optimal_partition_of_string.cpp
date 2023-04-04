class Solution {
public:
    int partitionString(string s) {
        int flag=0, part=1; 
        for (int i=0; i<s.size();) {
            int shift = s[i] - 'a';
            if (flag & (1<<shift)) {
                part++;
                flag = 0; 
            }
            else {
                flag |= (1<<shift);
                i++; 
            }
        }
        return part; 
    }
};