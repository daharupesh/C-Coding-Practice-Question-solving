#include<iostream>
using namespace std;
int main(){
    int fail;
    cout<<"Enter status::";
    cin>>fail;
    // if(fail==0){
    //     cout<<"fail"<<endl;
    // }
    // else{
    //     cout<<"pass"<<endl;
    // }
    //ternary Operator..
    fail==0?cout<<"fail":cout<<"pass";

    
    return 0;
}