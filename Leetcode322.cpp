#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int coinchange(vector<int> &coins,int &amount){
    vector<int> dp(amount+1,amount+1);
    dp[0]=0;
    for(int i =0;i<=amount;i++){
        for(int coin : coins){
            if(coin<=i){
                dp[i]=min(dp[i],1+dp[i-coin]);
            }
        }
    }
    if(dp[amount]==amount+1){
        return -1;
    }
    return dp[amount];
};

int main(){
    vector<int> coins = {1,3,4};
    int amount =6;
    int answer = coinchange(coins,amount);
    cout<<"Min number of coins required : "<<answer;
    return 0;
}