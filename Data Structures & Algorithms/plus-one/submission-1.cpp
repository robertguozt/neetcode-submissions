class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = true;
        for (int i = digits.size() - 1; i >= 0; i--){
            if (carry){
                if (digits[i] != 9){
                    digits[i] += 1;
                    carry = false;
                }
                else {
                    digits[i] = 0;
                }
            }
        }
        if (carry){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
