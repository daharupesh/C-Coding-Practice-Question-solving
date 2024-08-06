#include<iostream>
using namespace std;
int main(){
    float sp,cp;
    float profit,loss;
    cout<<"Enter selling price(sp):";
    cin>>sp;
    cout<<"Enter cost price(cp):";
    cin>>cp;
    if(sp>cp){
        profit= sp-cp;
        cout<<"Profit is:"<<profit<<endl;
    }
    else if(sp<cp){
        loss=cp-sp;
        cout<<"Loss is:"<<loss<<endl;
    }
    return 0;
    
}