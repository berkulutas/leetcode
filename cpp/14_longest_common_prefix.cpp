class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string res = "";
    string control = strs[0];
    int minlen = 500; 

    for (int i = 0; i<strs.size(); i++) {
        if (strs[i].length() < minlen)
            minlen = strs[i].length();
    }

    for (int i = 0; i<minlen; i++) {
        for (int w = 0; w<strs.size(); w++) {
            // cout << control[i] << " " << strs[w][i] << endl;
            if (control[i] != strs[w][i]) {
                return res; 
            }
        }
        // cout << res << endl; 
        res += control[i];
    }
    return res; 

}
};