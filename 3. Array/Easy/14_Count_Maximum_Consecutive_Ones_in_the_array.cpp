#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,0,1,1,1,1,1,1,0,0,0,1,0};

    int count=0,max_count=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }else{
count=0;
        }
        max_count=max(max_count, count);
    }


    cout<<"1 appears: "<<max_count<<" times!"<<endl;



    return 0;
}