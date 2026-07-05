#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={10,20,39,48,58,56,88,69,20,4,8};

    int largest=arr[0];
    int second_largest=-1;

    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>second_largest){
            second_largest=arr[i];
        }
    }
    
    cout<<"largest element is: "<<largest<<endl;
    cout<<"second largest element is: "<<second_largest<<endl;



    return 0;
}