class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>row(m,0);
        vector<int>col(n,0);
 for(int i=0;i<m;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(matrix[i][j]==0)
        {
        row[i]=1;
        col[j]=1;
        }
    }
 }
 for(int i=0;i<m;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(row[i]||col[j])
        {
            matrix[i][j]=0;
        }
    }
 }
        
    }
};
// brute force
class Solution {
public:
 void markRow(int row, vector<vector<int>>& matrix) {
        int cols = matrix[0].size();
        for (int j = 0; j < cols; j++) {
            if (matrix[row][j] != 0) {
                matrix[row][j] = INT_MIN+5;
            }
        }
    }

    void markCol(int col, vector<vector<int>>& matrix) {
        int rows = matrix.size();
        for (int i = 0; i < rows; i++) {
            if (matrix[i][col] != 0) {
                matrix[i][col] = INT_MIN+5;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    markRow(i,matrix);
                    markCol(j,matrix);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==INT_MIN+5)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
