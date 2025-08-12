// Find largest number in array
#include<iostream>
using namespace std;
int main(){
    int arr[]={45,24,76,35,54,56,69};
    int max=arr[0];
    for (int element:arr){
        if (max<element) max=element;}
    cout<<"Largest Number="<<max;    
    return 0;
}