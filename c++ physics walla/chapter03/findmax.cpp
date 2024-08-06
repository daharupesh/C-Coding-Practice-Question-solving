// find the maximum from the three number>>
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter three number";
    cout<<45%45;
    cin>>n1>>n2>>n3;
    // if(n1>n2 && n1>n3){
    //     cout<<"the greater number is:"<<n1<<endl;

    // }
    // else if(n2>n1 && n2>n3){
    //     cout<<"the greater number is :"<<n2<<endl;

    // }
    // else if(n3>n1 && n3 && n2){
    //     cout<<" the greater number is:"<<n3<<endl;
    // }
    if(n1>n2){
        if(n1>n3){
            cout<<n1<<"is greater..."<<endl;
        }
        else{
            cout<<n3<<"is greater..."<<endl;
        }
    }
    else{
       if(n2>n3){
         cout<<n2<<"is greater.."<<endl;
       }
       else{
        cout<<n3<<"is greater..."<<endl;
       }
    }
    return 0;
}
