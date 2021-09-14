// https://leetcode.com/problems/set-matrix-zeroes/
    void setZeroes(vector<vector<int>>& matrix) {

       int rows= matrix.size();
        int cols = matrix[0].size();
       
        int row[rows];
        int col[cols];
        
        for(int i = 0 ; i < rows; i ++)
            row[i] = false ;
        
        
        for(int i = 0 ; i < cols; i ++)
            col[i] = false ;
        
        for(int i = 0 ; i < rows ;  i++)
        {
            for(int j = 0 ; j < cols ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        
           for(int i = 0 ; i < rows ;  i++)
        {
            for(int j = 0 ; j < cols ; j++)
            {
                if(row[i] == true|| col[j] == true)
                {
                    matrix[i][j] = 0;
                }
            }
        }
            
        
    }
};