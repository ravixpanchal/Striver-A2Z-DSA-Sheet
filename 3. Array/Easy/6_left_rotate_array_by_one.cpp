#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5};//2,3,4,5,1

    int temp=arr[0];

    for(int j=1;j<arr.size();j++){
        arr[j-1]=arr[j];
    }
    arr[arr.size()-1]=temp;

    for(auto x: arr){
        cout<<x<<" , ";
    }
    cout<<endl;


    return 0;
}