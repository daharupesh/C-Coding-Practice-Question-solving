#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Warning!!! input number must be lies between 1 to 7...."<<endl;
    cout<<"enter the number:";
    cin>>n;
    if(n==1){
        cout<<"sunday";

    }
    else if(n==2){
        cout<<"monday";
    }
    else if(n==3){
       cout<<"Tuesday";
    }
    else if(n==4){
        cout<<"wednesday";
    }
    else if(n==5){
        cout<<"Thursday";
    }
    else if(n==6){
        cout<<"Friday";
    }
     else if(n==7){
        cout<<"saturday";
    }
    else{
        cout<<"invalid input";
    }
    

    
}