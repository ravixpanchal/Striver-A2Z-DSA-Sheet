#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={10,20,30,40,50,60,70,80,90,100};

    int smallest=arr[0];
    int second_smallest=INT_MAX;

    for(int i=1;i<arr.size();i++){
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }else if(arr[i]>smallest && arr[i]<second_smallest){
            second_smallest=arr[i];
        }
    }

    cout<<"smallest element is: "<<smallest<<endl;
    cout<<"second smallest element is: "<<second_smallest<<endl;


    return 0;
}