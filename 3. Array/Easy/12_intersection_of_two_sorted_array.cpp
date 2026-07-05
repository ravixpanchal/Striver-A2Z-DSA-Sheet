#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr1={1,2,3,3,4,5};
    vector<int>arr2={3,3,2,6,7,8,9};

    int m=arr1.size();
    int n=arr2.size();

    vector<int>ans;

    //2 pointer approach

    int i=0;
    int j=0;

    while(i<m && j<<n){
        if(arr1[i]<arr2[j]){
            i++;
        }else if (arr1[i]>arr2[j]){
            j++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    for(auto &x: arr1){
        cout<<x<<" ";
    }
    cout<<endl;



    return 0;
}