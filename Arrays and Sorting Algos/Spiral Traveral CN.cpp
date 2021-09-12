// https://www.youtube.com/watch?v=SVFXEqn3Ceo



  
void spiralPrint(int **a, int nRows, int nCols)
{
    
    
    int maxRow = nRows -1; 
    int maxCol = nCols -1; 
     int minRow = 0;
    int minCol = 0;
    int count = 0;
    int totalElem = nRows * nCols;
    while(count < totalElem)
    {
        
         // top wall
          for(int i = minRow , j = minCol; j <=  maxCol && count < totalElem; j++)
        {
            cout << a[i][j] << " ";
              count ++;
        }
     
        minRow ++;
        
          // right Wall
          for(int i = minRow , j = maxCol; i <= maxRow && count < totalElem; i++)
        {
            cout << a[i][j] << " ";
              count ++;
        }
          
         maxCol --;
        
      
        
        // bottom Wall 
        for(int i = maxRow , j = maxCol ; j >=  minCol && count < totalElem ; j--)
        {
            cout << a[i][j] << " ";
            count ++;
        }
        
    maxRow--;
        
        
          // left wall
        for(int i = maxRow , j = minCol; i >= minRow && count < totalElem ; i--)
        {
            cout << a[i][j] << " ";
            count ++;
        }
  minCol++;
      
        
                
       
        
    }
        
    
    
    
    
}