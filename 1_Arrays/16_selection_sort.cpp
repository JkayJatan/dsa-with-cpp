#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}
int main() {
    int arr[] = {6, 2, 12, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionsort(arr,n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}