class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxS = 0;
        while (left < right){
            int a = heights[left];
            int b = heights[right];
            int S = min(a, b) * (right - left);
            maxS = max(S, maxS);
            if (a < b){
                left++;
            }
            else{
                right--;
            }
        }
        return maxS;
    }
};
