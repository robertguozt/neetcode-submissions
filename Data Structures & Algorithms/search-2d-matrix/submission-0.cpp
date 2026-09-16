class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l1 = 0;
        int r1 = matrix.size() - 1;
        int ind = -1;
        while (l1 <= r1){
            int m = l1 + (r1-l1) / 2;
            if (target >= matrix[m][0] && target <= matrix[m][matrix[m].size() - 1]){
                ind = m;
                break;
            }
            else if (matrix[m][0] > target){
                r1 = m - 1;
            }
            else {
                l1 = m + 1;
            }
        }
        if (ind == -1){
            return false;
        }
        l1 = 0;
        r1 = matrix[ind].size() - 1;
        while (l1 <= r1){
            int m = l1 + (r1-l1) / 2;
            if (target == matrix[ind][m]){
                return true;
            }
            if (target > matrix[ind][m]){
                l1 = m + 1;
            }
            else {
                r1 = m - 1;
            }
        }
        return false;

    }
};
