#include<bits/stdc++.h>
using namespace std;

int gettingAllNumXor(int n){
    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    else return n;
}

int main(){

    int L=4;
    int R=7;

    int ans=gettingAllNumXor(L-1)^gettingAllNumXor(R);
    cout<<"Ans: "<<ans;

    


    return 0;
}