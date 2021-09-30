int findMaxSquareWithAllZeros(int **arr, int n, int m)
{



    int output[n][m];

    int i, j;

    int ans  = 0;
    for( i = n -1 ; i  >= 0 ;  i--)
    {
        for( j = m - 1 ; j >=0 ; j--)
        {


            if(i == n-1 && j == m-1)
            {
                output[i][j] = arr[i][j];
            }
            else if(i == n-1)
            {
                output[i][j] = arr[i][j];

            }
            else if(j == m-1)
            {
                output[i][j] = arr[i][j];

            }
            else 
            {

                if(arr[i][j] == 1)
                    output[i][j] = 0;
                else 
                {
                    output[i][j] = min(output[i+1][j] , min(output[i][j+1] , output[i+1][j+1])) + 1;

                }



            }

        }

    }

    int row, col ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if(output[i][j] > ans)
            {
                ans = output[i][j];
                row = i ; 
                col = j;
            }

        }
        // cout << endl;
    }

    if(row == 0 && col == 0)
        return ans + 1; 

    return ans;


}