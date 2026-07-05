#include<bits/stdc++.h>
using namespace std;

void next_permutation(vector<int>&arr){
    int n=arr.size();

    //step1
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i+1]>arr[i]){
            idx=i;
            break;

        }
    }

    if(idx==-1){
        reverse(arr.begin(), arr.end());
        return ;
    }

    //2. greater element'
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[idx]){
            swap(arr[i], arr[idx]);
            break;
        }
    }

    reverse(arr.begin()+idx+1, arr.end());

}

int main(){
    vector<int>arr={3,1,4,5};;
    next_permutation(arr);

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;





    return 0;
}