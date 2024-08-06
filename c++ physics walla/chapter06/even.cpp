// write a programming if it is even or divisible by 3
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>> number;
    (number%2==0 && number%3==0)?cout<<number:cout<<"it is not even and divisible by 3";
    return 0;
}