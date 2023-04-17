class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxC = 0;
        for (auto c : candies)
            maxC = max(c,maxC);
        int size =candies.size(); 
        vector<bool> ans(size, false);
        for (int i=0; i<size; i++)
            if (candies[i]+extraCandies >=maxC) ans[i] = true; 
        return ans; 

    }
};