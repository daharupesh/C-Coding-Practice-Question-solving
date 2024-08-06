// find the given number is odd or even...
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    if(number%2==1){
        cout<<"The number "<<number<<" is odd.";
    }
    else{
        cout<<"The number "<<number<<" is even.";
    }
 return 0;
}