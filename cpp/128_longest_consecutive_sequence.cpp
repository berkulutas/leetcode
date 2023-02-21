class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end()); 
        // for (auto &i : nums)
        //     s.insert(i);

        int longestSeq = 0; 
        int currSeq; 
        
        for (auto i : nums) {
            currSeq = 1; 
            if (s.find(i-1) == s.end()) {
                while(s.find(i+1) != s.end()) {
                    currSeq++; 
                    i++; 
                }
            }
            longestSeq = max(longestSeq, currSeq);
        }
        
        return longestSeq; 
    }
};