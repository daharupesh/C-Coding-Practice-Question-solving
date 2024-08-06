// Write a program to print day based on number:
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter input from 1 t0 7:";
    cin>>number;
    
    switch (number)
    {
    case 1:
          cout<<"Sunday";
          break;
    
    case 2:
          cout<<"Monday";
          break;
    case 3:
          cout<<"Tuesday";
          break;
    case 4:
          cout<<"wednesday";
          break;
    case 5:
          cout<<"Thursdat";
          break;
    case 6:
          cout<<"Friday";
          break;
    case 7:
          cout<<"Saturday";
          break;                              
    default:
          cout<<"invalid input>>>";
          break;
        break;
    }
    return 0;
}