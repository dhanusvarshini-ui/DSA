#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dfs(int employee,vector<vector<int>>& children,vector<int>& informtime){
    if(children[employee].empty()){
        return 0;
    }
    int maxtime = 0;

    for(int child : children[employee]){
        int childtime = dfs(child,children,informtime);
        maxtime = max(maxtime,childtime);
    }
    return informtime[employee]+maxtime;
};
int main(){
    int n = 6;
    int headID = 2;
    vector<int> manager = {2, 2, -1, 2, 3, 3};
    vector<int> informtime = {0, 0, 1, 2, 0, 0};

    vector<vector<int>> children(n);

    for(int i =0; i< n;i++){
        if(manager[i]!=-1){
            children[manager[i]].push_back(i);
        }
    }

    int answer = dfs(headID,children,informtime);
    cout<< "Max time : "<< answer<<endl;
    return 0;
}