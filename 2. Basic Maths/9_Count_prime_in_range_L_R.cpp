#include<bits/stdc++.h>
using namespace std;

vector<int>sieveWithPrefix(int n){
    vector<bool>isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;

    for(int i=2;i<=sqrt(n);i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }

    //Prefix sum array
    vector<int>prefix(n+1,0);

    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+(isPrime[i]?1:0);
    }
    return prefix;
}

int countPrimeInRange(int L,int R, vector<int>&prefix){
    if(L==0) return prefix[R];
    return prefix[R]-prefix[L-1];
}

int main (){
    int n= 100000;
    vector<int>prefix=sieveWithPrefix(n);

    int L,R;
    cin>>L>>R;

    int res=countPrimeInRange(L,R,prefix);

    cout<<res;


    
    return 0;
}