
    public:
    //Heapify function to maintain heap property.
    void heapify(int a[], int n, int i)  
    {
       int left = 2*i+1;
       int right = 2*i+2;
       int largest = i;
       
       if(left < n && a[left] >a[largest])
       largest = left;
       
      if(right < n && a[right] >a[largest])
      largest = right;
      
      if(largest != i)
      {
          swap(a[largest], a[i] );
          heapify(a,n,largest);
      }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int a[], int n )
    { 
            for(int i = n/2-1 ; i >= 0 ; i--)
            {
                heapify(a,n,i);
            }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int a[], int n)
    {
           int heapSize = n;
           
           buildHeap(a,n);
           
           for(int i = n-1 ; i >= 0 ; i--)
           {
               swap(a[0],a[i]);
               heapSize --;
               heapify(a,heapSize, 0);
           }

    }
};


