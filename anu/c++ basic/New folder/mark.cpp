#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Warning number must lies between 0 to 100"<<endl;
    cout<<"Enter the number: ";
    cin>>number;
    if(number>=80 && number<=100){
        cout<<"You have got distinction";
    }
    else if(number>=70){
        cout<<"you have got fist division";

    }
    else if(number>=60){
        cout<<"you have got second division";
    }
    else if(number>=50){
        cout<<"you have got third division";

    }
    else if(number<50){
        cout<<"you are failed!!";
    }
    else{
        cout<<"sorry , you have entered wrong input!!!";
    }
    return 0;
}