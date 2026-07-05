#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={10,5,2,7,1,9};
    int n=arr.size();
    int k;
    cout<<"Enter the K value: ";
    cin>>k;

    int left=0;
    int right=0;

    int sum=arr[0];
    int maxLen=0;

    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }

        if(sum==k) {
            maxLen=max(maxLen, right-left+1);
        }

        right++;
        if(right<n) sum+=arr[right];

    }

    cout<<"Max Subarray Length is: "<<maxLen;


    return 0;
}