//Reverse array using Two pointer approach
#include<iostream>
using namespace std;
void revarray(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    revarray(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    return 0;
}