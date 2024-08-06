#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b =12;
    int sum = (++a) + (++b) - (++a); 
             //11    + //13   - //11 = 13
    cout<<sum;       
}