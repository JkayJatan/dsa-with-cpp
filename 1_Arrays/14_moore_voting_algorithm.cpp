//Moore's voting algorithm for majority element
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,1,1};
    int freq=0,ans;
    for(int i=0;i<5;i++){
        if(freq==0) ans=arr[i];
        if(ans==arr[i]){
            freq++;
        }else freq--;
    }
    cout<<"Majority element = "<<ans;
    return 0;
}