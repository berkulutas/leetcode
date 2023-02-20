class Solution {
public:
int tbt_id(int i, int j) {
    return i/3*3 + j/3; 
}

bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> columns(9);
        vector<unordered_set<char>> threebythree(9);

        for (int i = 0; i<9; i++) {
            for (int j = 0; j<9; j++) {
                auto c = board[i][j];
                if (c == '.') continue;

                auto tmpR = rows[i].insert(c);
                auto tmpC = columns[j].insert(c);
                auto tmp3 = threebythree[tbt_id(i,j)].insert(c);

                if (!(tmpR.second && tmpC.second && tmp3.second)) {
                    return false; 
                }
            }
        }
        

        return true;
}
};