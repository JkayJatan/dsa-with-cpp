#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Size is automatically determined
    int arr2[5] = {10, 20};      // Remaining values auto-filled with 0

    // Output
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
