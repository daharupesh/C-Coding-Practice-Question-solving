#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number:";
    cin>>number;
    bool condition  (number >=1 && number<=100);
    if(condition){
        if(number%2==0){
            cout<< number <<" is even number.";
        }
        else{
            cout<< number <<" is odd number";
        }
    }
    else
    {
        cout<<"numbers are not allowed";
    }
    return 0;

}