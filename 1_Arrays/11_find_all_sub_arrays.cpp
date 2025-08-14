#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(int start=0;start<sz;start++){
        for(int end=start;end<sz;end++){
            for (int k=start;k<=end;k++){
                cout<<arr[k]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}