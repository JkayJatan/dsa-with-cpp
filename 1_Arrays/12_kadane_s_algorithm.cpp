//Maximum subarray sum using Kadane's algorithm (optimized method)
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxsum= INT_MIN;
    int cs=0;
    for(int i:arr){
        cs+=i;
        maxsum=max(cs,maxsum);
        if (cs<0){
            cs=0;
        }
    }
    cout<<"Max subarray sum = "<<maxsum;
    return 0;
}
/*
//Maximum subarray sum using Brute force
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int maxsum= INT_MIN;
    for(int start=0;start<sz;start++){
        int cs=0;
        for(int end=start;end<sz;end++){
            cs+=arr[end];
            maxsum=max(cs,maxsum);
        }
        
    }
    cout<<"Max subarray sum = "<<maxsum;
    return 0;
}
*/