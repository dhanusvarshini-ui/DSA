#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

int maxsubarray(vector<int> &arr){
    int res = arr[0];
    int maxending = arr[0];
    for(int i=1;i<arr.size();i++){
        maxending=max(arr[i],maxending+arr[i]);
        res=max(res,maxending);
    }
    return res;
};
int main(){
    vector<int> arr = {2, 3, -8, 7,-1, 2, 3};
    cout<<"Maximum subarray sum : "<<maxsubarray(arr);
    return 0;
}