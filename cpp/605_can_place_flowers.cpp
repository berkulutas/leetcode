class Solution {
public:
    int size;
    bool place(vector<int>& flowerbed, int i) {
        flowerbed[i] = (((i-1<0) || (!flowerbed[i-1])) && ((i+1==size) || (!flowerbed[i+1])));
        return flowerbed[i];
    }
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        size = flowerbed.size();
        int maxplace = 0 ;
        for (int i=0; i<size; i++) {
            if (flowerbed[i] == 0) {
                maxplace += (place(flowerbed, i) ? 1 : 0); 
            }
        }
        return n<=maxplace; 
    }
};