#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>prices={7,1,5,3,6,4};
    int minPrice=INT_MAX;
    int maxProfit=0;

    for(int i=0;i<prices.size();i++){
        minPrice=min(minPrice,prices[i]);
        int profit=prices[i]-minPrice;
        maxProfit=max(maxProfit,profit);
    }

    cout<<"max profit is: "<<maxProfit<<endl;

    return 0;

}