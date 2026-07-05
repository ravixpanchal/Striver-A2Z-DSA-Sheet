#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={3,1,-2,-5,2,-4};
    vector<int>ans(arr.size());
    int evenSign=0;
    int oddSign=1;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            ans[evenSign]=arr[i];
            evenSign+=2;
        }else{
            ans[oddSign]=arr[i];
            oddSign+=2;
        }

    }

    for(auto &x: ans){
        cout<<x<<" ";
    }
    cout<<endl;


    return 0;
}