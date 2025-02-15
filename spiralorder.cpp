class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int top = 0;
        int bottom = rows - 1;
        int left = 0;
        int right = cols - 1;
        int dir = 0;
        vector<int> result;

        while (top <= bottom && left <= right) {
            if (dir == 0) {
                for (int i = left; i <= right; ++i) {
                    result.push_back(matrix[top][i]);
                }
                top++;
            } else if (dir == 1) {
                for (int i = top; i <= bottom; ++i) {
                    result.push_back(matrix[i][right]);
                }
                right--;
            } else if (dir == 2) {
                for (int i = right; i >= left; --i) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            } else if (dir == 3) {
                for (int i = bottom; i >= top; --i) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }
        return result;
    }
};
