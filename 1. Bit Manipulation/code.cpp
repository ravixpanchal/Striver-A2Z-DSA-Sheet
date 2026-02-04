#include<bits/stdc++.h>
using namespace std;

vector<int>getDivisor(int n){
    vector<int>ans;

    for(int i=1;i<=n;i++){
        if(n%i==0) ans.push_back(i);
    }
    return ans;
}

int main (){
    vector<int>res=getDivisor(10);

    for(auto &x: res) cout<<x<<" ";
    
    return 0;
}