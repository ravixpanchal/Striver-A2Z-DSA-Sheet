#include<bits/stdc++.h>
using namespace std;

vector<int>getAllPrimes(int n){
    vector<bool>isPrime(n+1,true);
    vector<int>ans;

    isPrime[0]=isPrime[1]=false;

    for(int i=2;i<=sqrt(n);i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }

    //collect primes

    for(int i=2;i<=n;i++){
        if(isPrime[i]) ans.push_back(i);
    }

    return ans;
}

int main (){
    int n;
    cin>>n;

    vector<int>res=getAllPrimes(n);

    for(auto &x: res) cout<<x<<" ";
    
    return 0;
}