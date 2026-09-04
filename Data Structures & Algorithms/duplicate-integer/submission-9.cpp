class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> a = {};
        for ( int i : nums ){
            if (a.contains(i)){
                return true;
            }
            a.insert(i);
        }
        return false;
    }
};