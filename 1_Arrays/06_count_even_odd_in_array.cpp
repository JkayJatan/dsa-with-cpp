//Count even and odd numbers in array
#include <iostream>
using namespace std;
int main() {
    int n, even=0, odd=0;
    int arr[]={34,5,3,87,24,2,7,99,42}; 
    for (int element:arr){
        if (element%2==0) even++; else odd++;}
    cout << "Even = " << even << ", Odd = " << odd;
}
