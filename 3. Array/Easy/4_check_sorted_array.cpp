#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<arr.size();i++){
        if(arr[i+1]>=arr[0]){
            continue;
        }else{
            cout<<"Array is not in a Sorted Order!";
        }
    }
cout<<"Array is Sorted!";



    return 0;
}