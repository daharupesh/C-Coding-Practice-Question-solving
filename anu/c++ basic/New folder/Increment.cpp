#include <iostream>
using namespace std;
int main(){
    int a =10;
    cout<<a++<<endl; //10
    cout<<a<<endl;  // 11
    cout<<a<<endl;  // 11
    cout<<a++<<endl; //11
    cout<<a++<<endl; //12
    cout<<a<<endl; // 13 
    cout<<a<<endl;  //13
     cout<<a++<<endl; //13
    cout<<a<<endl;  //14
    cout<<a++<<endl;  //14
    cout<<a++<<endl;  //15
    cout<<a;
    // a++; //a=a+1
    // cout<<a;


    return 0;
}