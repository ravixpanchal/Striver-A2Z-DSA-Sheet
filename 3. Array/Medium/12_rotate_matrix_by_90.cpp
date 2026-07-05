#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};

    //transpose
    for(int i=0;i<mat.size();i++){
        for(int j=i;j<mat.size();j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    //reverse
    for(int i=0;i<mat.size();i++){
        reverse(mat[i].begin(), mat[i].end());
    }

    for(auto &row: mat){
        for(auto &col: row){
            cout<<col<<" ";
        }
        cout<<endl;
    }



    return 0;
}