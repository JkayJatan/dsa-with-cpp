#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unique element:";
    for(int i=0;i<n;i++){
        bool isunique=true;
        for (int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                isunique=false;
            }
        }if(isunique){
            cout<<arr[i]<<",";
        }
    }
    return 0;
}