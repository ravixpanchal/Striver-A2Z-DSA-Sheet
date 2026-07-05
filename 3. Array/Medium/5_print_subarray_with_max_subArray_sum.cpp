#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={7,1,5,3,6,4};
    int maxProfit=0;
    int minPrice=INT_MAX;

    for(int i=0;i<arr.size();i++){
        minPrice=min(minPrice,arr[i]);

        int profit=arr[i]-minPrice;

        maxProfit=max(maxProfit,profit);
    }
    cout<<"max profit is: "<<maxProfit<<endl;




    return 0;
}