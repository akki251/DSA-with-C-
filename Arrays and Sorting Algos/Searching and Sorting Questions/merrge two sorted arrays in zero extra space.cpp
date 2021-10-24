// https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/
// https://www.youtube.com/watch?v=hVl2b3bLzBw
// TIME COMPLEXITY 0((M+N)log(M+N));

    int a1[] = {1, 5, 9, 10, 15, 20};
    int a2[] = {2, 3, 8, 13};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    int i = 0;
    int j = 0;
    while (i < n1)
    {

        if (a1[i] < a2[j])
            i++;
        else if (a1[i] > a2[j])
        {
            swapInt(&a1[i], &a2[j]);
            sort(a2, n2);
            i++;
        }
    }
    PrintArray(a1, n1);
    PrintArray(a2, n2);

 // In o1 Space 


 
    class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        
         int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
        
        
    }
};