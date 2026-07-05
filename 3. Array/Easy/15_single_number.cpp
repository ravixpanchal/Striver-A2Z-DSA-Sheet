#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,2,3,3,4,4,5,5};
    int xorr=0;

    for(int i=0;i<arr.size();i++){
        xorr=xorr^arr[i];
    }

    cout<<"single number is: "<<xorr<<endl;




    return 0;
}