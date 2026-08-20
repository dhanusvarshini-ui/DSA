#include<iostream>
#include<vector>
using namespace std;
bool matsearch(vector<vector<int>> &mat, int x){
    int m = mat.size();
    int n = mat[0].size();

    for(int i=0;i<m;i++){
        for(int j =0;j<m;j++){
            if(mat[i][j] == x){
                return true;
            }
        }

    }
    return false;
};
int main(){
    vector<vector<int>> mat ={{3, 30, 38},{20, 52, 54},{35, 60, 69}};
    int x = 42;
    if(matsearch(mat,x)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}