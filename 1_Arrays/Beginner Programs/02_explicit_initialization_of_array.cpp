#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Size given explicitly
    int arr2[5] = {0};            // All elements initialized to 0

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
