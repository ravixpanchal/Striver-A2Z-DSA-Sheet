#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={1,1,2,2,2,3,3,3,3,4,4,4,4,5,6,6,7,9};
    //Use 2 pointer approach
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }

    }
    cout<<"Size of array is: "<<i+1<<endl;



    return 0;
}