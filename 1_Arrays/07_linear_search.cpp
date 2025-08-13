//Linear search algorithm
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int target){
    for (int i=0;i<n;i++){
        if (arr[i]==target) {
            return i;}
    }
    return -1;
}
int main(){
    int arr[]={6,12,7,3,9,4,17,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    cout<<"Target at index:"<<linearsearch(arr,n,target);
    return 0;
}