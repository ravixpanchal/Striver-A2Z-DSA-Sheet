#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int>&arr,int st,int end){
    while(st<=end){
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;

        st++;
        end--;
    }
}



int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9};//456789123
    int k=3;
    int n=arr.size();

    k=k%n;

    // reverse(arr.begin(), arr.begin()+k);
    // reverse(arr.begin()+k, arr.end());
    // reverse(arr.begin(), arr.end());

    Reverse(arr,0,n-k-1);
    Reverse(arr,n-k,n-1);
    Reverse(arr,0,n-1);

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;


    return 0;
}