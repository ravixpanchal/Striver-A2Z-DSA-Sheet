#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>&arr, int target){
    unordered_map<int,int>m;
vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int need=target-arr[i];

        if(m.find(need)!=m.end()){
            ans.push_back(m[need]);
            ans.push_back(i);
        }
        m[arr[i]]=i;

    }
    return ans;
}

int main(){



    vector<int>arr={2,7,11,15};
    vector<int>res=twoSum(arr,17);

    for(auto i: res){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}