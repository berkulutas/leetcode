class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> freqs(26,0);

        for (int i =0; i<s.size(); i++) {
            freqs[s[i]-'a']++;
            freqs[t[i]-'a']--; 
        }

        for (auto &tmp : freqs) {
            if (tmp != 0) return false; 
        }
        return true;

    }
};