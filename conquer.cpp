#include <iostream>
#include <algorithm> // Required for std::max

using namespace std;

// Function to find the maximum element in an array using divide and conquer
int findMax(int arr[], int left, int right) {
    // Base case: if there is only one element
    if (left == right) {
        return arr[left];
    }

    // Divide: find the middle point
    int mid = left + (right - left) / 2;

    // Conquer: recursively find max in left and right halves
    int maxLeft = findMax(arr, left, mid);
    int maxRight = findMax(arr, mid + 1, right);

    // Combine: return the maximum of the two halves
    return max(maxLeft, maxRight);
}

int main() {
    int arr[] = {12, 34, 5, 45, 9, 8, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the findMax function with the entire array range
    int maxVal = findMax(arr, 0, n - 1);

    cout << "The maximum element in the array is: " << maxVal << endl;

    return 0;
}

