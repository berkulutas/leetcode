class Solution {
public:
    int minDistance(string word1, string word2) {
        int l1 = word1.length()+1;
        int l2 = word2.length()+1;

        int dp[l1][l2];
        for (int i = 0; i<l1; i++) {
            dp[i][0] = i;
        }
        for (int j = 0; j<l2; j++) {
            dp[0][j] = j;
        }

        for(int i = 1; i<l1; i++) {
            for (int j = 1; j<l2;j++) {
                int tmp1 = min(dp[i-1][j], dp[i][j-1]) + 1;
                int tmp2 = dp[i-1][j-1];
                tmp2 += (word1[i-1] == word2[j-1] ?  0 : 1);
                dp[i][j] = min(tmp1, tmp2);
            }
        }
        return dp[l1-1][l2-1]; 
    }
};