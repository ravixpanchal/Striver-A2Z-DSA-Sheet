#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>arr={-3,2,1,5,-4,9,8};
int largest=arr[0];
for(int i=0;i<arr.size();i++){
   if(arr[i]>largest){
      largest=arr[i];
   }
}

cout<<"max element is: "<<largest;


   return 0;
}