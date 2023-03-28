class Solution {
public:
    vector<int> dp;
    int sub(vector<int> &days,vector<int> &costs, int start) {
        int size = days.size();
        if (start>= size) return 0;

        if(dp[start]) return dp[start];

        int day_cost = costs[0] + sub(days, costs, start+1);
        
        int i; 
        for(i=start; i<size && days[i]<days[start]+7; i++);
        int w_cost = costs[1] + sub(days, costs, i);

        for(i=start; i<size && days[i]<days[start]+30; i++);
        int m_cost = costs[2] + sub(days, costs, i);

        dp[start] = min(min(day_cost,w_cost), m_cost);

        return dp[start];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        dp.resize(366);
        return sub(days, costs, 0);
    }
};