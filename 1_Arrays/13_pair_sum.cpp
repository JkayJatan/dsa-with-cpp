//return pair in sorted array with target sum.
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums,int target){
    vector<int> ans;
    int i=0,j=nums.size()-1;
    while (i<j){
        if(target>nums[i]+nums[j]){
            i++;
        }else if(target<nums[i]+nums[j]){
            j--;
        }else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

        
    }
    return ans;
}
int main(){
    vector<int> nums={2,7,11,12};
    int target=18;
    vector<int> ans=pairsum(nums,target);
    cout<<ans[0]<<", "<<ans[1];
    return 0;
}