#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={1,2,4,5,6,7,8};

    int xorr1=0,xorr2=0;
    int n=nums.size();

    for(int i=0;i<=n+1;i++){
        xorr1^=i;
    }

    for(auto x: nums){
        xorr2^=x;
    }

    int ans=xorr1^xorr2;

    cout<<"missing number is: "<<ans<<endl;



    return 0;
}