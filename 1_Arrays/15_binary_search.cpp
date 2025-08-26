#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid; // found
        else if (arr[mid] < target)
            low = mid + 1; // search right side
        else
            high = mid - 1; // search left side
    }
    return -1; // not found
}

int main() {
    // Example sorted array
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 40; // element we want to search
    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element " << target << " found at index " << result << endl;
    else
        cout << "Element " << target << " not found." << endl;

    return 0;
}
