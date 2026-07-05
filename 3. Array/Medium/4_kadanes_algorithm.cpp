#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};

     int currSum=0;
    int maxSum=INT_MIN;

    int st=0;
    int end=0;
    int temp=0;

    for(int i=0;i<arr.size();i++){

        if(currSum==0){
            temp=i;
        }



        currSum+=arr[i];

        if(currSum>maxSum){
            maxSum=currSum;
            st=temp;
            end=i;
        }

        if(currSum<0) currSum=0;        
    }

    cout<<"maxSum is: "<<maxSum<<endl;

    for(int i=st;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}