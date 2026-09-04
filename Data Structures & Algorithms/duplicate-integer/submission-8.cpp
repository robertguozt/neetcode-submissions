class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> unique_elements(nums.begin(), nums.end());
        return nums.size() != unique_elements.size();
    }
};