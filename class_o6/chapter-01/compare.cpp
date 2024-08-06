#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"number topic\n";
    cout<<"1 for Introduction of Number...\n";
    cout<<"2 for application of Number...\n";
    cout<<"press here:";
    cin>>number;
    switch (number)
    {
    case 1:
        cout<<"An arithmetical value, expressed by a word, symbol, or figure representing a particular quantity and used in counting and making calculations.";
        break;
    case 2:
           cout<<"1.mathematics\n2.Science \n3.Finance and Economics \n4.Engineering and Technologies\n5.statics \n5.Measurement\n6.Cryptography\n7.Sports and Games\n8.Medicine \n9.Probability and Risk Assessment.";
           break;
    case 3:
          cout<<"My name is rupesh kumar Daha and I am " ;
          break;      
    default:
          cout<<"Invalid input!!!";
          break;
    }
}