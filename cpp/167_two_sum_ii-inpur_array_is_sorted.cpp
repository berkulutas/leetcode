class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0; 
        int r = numbers.size()-1;

        while(l < r) {
            // cout << numbers[l] << " " << numbers[r] << endl;
            if (numbers[l] + numbers[r] < target)
                l++; 
            else if (numbers[l] + numbers[r] > target)
                r--;
            else break;
        }

        vector<int> res(2);
        res[0] = l+1;
        res[1] = r+1;

        return res; 

    }
};