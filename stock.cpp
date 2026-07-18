#include<iostream>
#include<vector>
using namespace std;
 
int buysellstock(vector<int> &prices){
    int minsofar = prices[0];
    int res = 0;

    for(int i =1;i<prices.size();i++){
        minsofar=min(minsofar,prices[i]);
        res = max(res,prices[i]-minsofar);
    }
    return res;
}
int main(){
    vector<int> prices ={7, 10, 1, 3, 6, 9, 2};
    cout<<"Best value to buy and sell stock : "<<buysellstock(prices);
    return 0;
}