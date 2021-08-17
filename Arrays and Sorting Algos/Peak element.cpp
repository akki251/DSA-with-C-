// https://www.codingninjas.com/codestudio/problems/find-peak-element_1081482?leftPanelTab=2

/*
    Time Complexity: O(n)
    Space Complexity: O(1)

    Where 'n' is the number of elements
*/

int findPeak(vector<int> &arr) {
    // Array size
    int n = arr.size();
    // If single element, that is the peak
    if (n == 1) return arr[0];

    // If strictly decreasing
    if (arr[0] >= arr[1]) return arr[0];

    // If strictly increasing
    if (arr[n - 1] >= arr[n - 2]) return arr[n - 1];

    for (int i = 1; i < n - 1; i++) {
        // Condition for peak
        if (arr[i - 1] < arr[i] and arr[i + 1] < arr[i]) {
            return arr[i];
        }
    }
}