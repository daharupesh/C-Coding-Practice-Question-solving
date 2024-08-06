#include<iostream>
using namespace std;
int main(){
    int r1,r2,r3,r4,I,V;
    cout<<"Enter the paralleled Resigster:";
    cin>>r1>>r2;
    cout<<"Enter series Resister: ";
    cin>>r3;
    cout<<"Enter Voltage Suppied: ";
    cin>>V;
    cout<<"The result is:"<<endl;
    r4=(r1*r2)/(r1+r2);

    I = V/(r3+r4);

    cout<<"The Current is :"<<I<<"A"<<endl;


    return 0;
}