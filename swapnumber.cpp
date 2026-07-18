#include<iostream>
using namespace std;
void swap1(int &a, int &b){
     a = a+b;
     b= a-b;
     a = a-b;
};
int main(){
    int a,b;
    a = 10;
    b = 15;
    cout<<"Before swapping : "<<a <<" and "<<b<<endl;
    swap1(a,b);
    cout<<"After swapping : "<<a <<" and "<<b;
    return 0;
}