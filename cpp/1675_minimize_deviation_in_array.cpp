class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int minx = INT_MAX;
        priority_queue<int> pq; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]%2) nums[i] *= 2; 
            minx = min(minx, nums[i]);
            pq.push(nums[i]);
        }

        int dev = pq.top() - minx;
        while(pq.top()%2 == 0) {
            int tmp = pq.top(); pq.pop();
            // printf("popped = %d min = %d dev = %d\n", tmp, minx, dev);
            tmp = tmp/2; 
            pq.push(tmp);
            minx = min(minx, tmp);
            dev = min(dev, pq.top()-minx);
        }

        return dev;   
    }
};