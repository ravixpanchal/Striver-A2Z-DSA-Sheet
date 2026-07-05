
//Dutch National Flag Algorithm
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={0,1,2,0,1,2};
    int low=0;
    int mid=0;
    int high=arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;

        }else if(arr[mid]==1){
            mid++;

        }else{
            swap(arr[mid], arr[high]);
            high--;

        }
    }

    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}