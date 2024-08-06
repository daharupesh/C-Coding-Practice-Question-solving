#include <iostream>
using namespace std;
int main(){
    int number,i=1;

    cout<<"Enter the number you donot want to print: ";
    cin>>number;
    if(number){
        cout<<"machikane";
    }
    int sum=0;
    while (i<=number)
    {
        sum = sum +i;
        i++;
    }
    cout<<"sum is: "<<sum;
    
    return 0;
}