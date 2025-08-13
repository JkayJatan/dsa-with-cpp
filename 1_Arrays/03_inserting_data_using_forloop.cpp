#include <iostream>
using namespace std;

int main() {
    int arr[5]; // declared but uninitialized

    // Populate array using user input
    for (int i = 0; i < 5; i++) {
        cout << "Enter value for arr[" << i << "]: ";
        cin >> arr[i];
    }

    // output
    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
