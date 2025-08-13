//sum of all elements of array
#include<iostream>
using namespace std;
int main(){
    int arr[]={6,12,7,3,9};
    int sum=0;
    for (int element:arr){
        sum+=element;
    }
    cout<<"sum of elements="<<sum;
    return 0;
}