#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={9,-3,3,-1,6,-5};
    
    int sum=0;
    int maxi=0;
    
    //unordered_map
    unordered_map<int,int>m;//sum, index

    for(int i=0;i<arr.size();i++){
        sum+=arr[i];

        if(sum==0){
            i+=1;
        }else{
            if(m.find(sum)!=m.end()){
                maxi=max(maxi,i-m[sum]);
            }else{
                m[sum]=i;
            }
        }

    }

    cout<<"Our max sum length is: (which is equal to zero) "<<maxi<<endl;






    return 0;
}