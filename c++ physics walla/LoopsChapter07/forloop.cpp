// print the first multiple of 5 which is also a multiple of 7...
#include<iostream>
using namespace std;
int main(){
    int i=5;
    while (true)
    {
        if(i%7==0){
            cout<<"The value is: "<<i<<endl;
            break;
        }
        i+=5;
    
    }
    

    return 0;

}