class Solution {
public:
    int bs(vector<int>& potions, int num, int size, long long success) {
        int l=0, r=size-1;
        while (l < r) {
            int mid = l+(r-l)/2;
            if (potions[mid]*(long long)num >= success)
                r = mid;
            else 
                l = mid+1; 
        }
        if ((l == size-1) && (potions[l]*(long long)num < success))
            return 0; 
        return size-l;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int ssize = spells.size(),  psize = potions.size();
        vector<int> pairs(ssize);
        for (int i=0; i<ssize; i++) {
            // int where = bs(potions, spells[i], psize, success);
            // cout << spells[i] << " " << where << endl; 
            pairs[i] = bs(potions, spells[i], psize, success);
        }

        return pairs; 
    }
};