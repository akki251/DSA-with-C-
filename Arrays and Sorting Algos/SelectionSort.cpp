#include <iostream>

using namespace std;


void selectionSort(int a[], int n)
{

    if (n == 1)
    {
        return;
    }
    int min = a[0];
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }
// fine minimum element in array, and swap with zeroth / first element 
    swapInt(&a[minIndex], &a[0]);

    selectionSort(a + 1, n - 1); // call recursively

  
}

int main()
{

    int a[] = {8, 5, 3, 4, 1, 6, 2};

    int n = sizeof(a) / sizeof(a[0]);

    selectionSort(a, n);
    PrintArray(a, n);
}
