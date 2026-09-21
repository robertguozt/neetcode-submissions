class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> a;
        int b = helper(n);
        while (a.count(b) == 0 && b != 1){
            a.insert(b);
            b = helper(b);
        }
        return b == 1;
        
    }
    int helper(int n){
        if (n < 10){
            return n*n;
        }
        return (n % 10) * (n % 10) + helper(n/10);
    }
};
