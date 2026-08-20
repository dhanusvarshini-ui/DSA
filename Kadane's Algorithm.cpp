#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

int maxsubarray(vector<int> &arr){
    int res = arr[0];
    for(int i=0;i<arr.size();i++){
        int currentsum = 0;
        for(int j = i;j<arr.size();j++){
            currentsum += arr[j];
             res = max(res,currentsum);
        }
    }
    return res;
};
int main(){
    vector<int> arr = {2, 3, -8, 7,-1, 2, 3};
    cout<<"Maximum subarray sum : "<<maxsubarray(arr);
    return 0;
}