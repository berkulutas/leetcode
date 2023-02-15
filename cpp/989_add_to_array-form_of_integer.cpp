class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
    int c = 0; 
    int tmp;
    for (int i = num.size()-1; i>=0 ; i--) {
        tmp = k%10 + num[i] + c;
        c = tmp/10; 
        num[i] = tmp%10; 
        k /= 10; 
    }

    k += c;
    // cout << k << "\n"; 

    while (k>0) {
        num.insert(num.begin(), k%10);
        k /= 10; 
    }

    return num; 
}
};