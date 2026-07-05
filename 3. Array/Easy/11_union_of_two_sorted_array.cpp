#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr1={1,2,2,2,3,3,3,4};
    vector<int>arr2={4,4,4,5,5,5,6,7};

    int m=arr1.size();
    int n=arr2.size();

    vector<int>ans;

    //2 pointer approach
    int i=0;
    int j=0;

    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            if(ans.size()==0 || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);

            }
            i++;
        }else{
            if(ans.size()==0 || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;

        }

    }
    while(i<m){
            if(ans.size()==0 || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }

        while(j<n){
            if(ans.size()==0 || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
        for(auto &x: ans){
            cout<<x<<" ";
        }
        cout<<endl;


        return 0;
}