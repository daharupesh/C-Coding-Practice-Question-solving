// Print all the values between 1 and 50 except for the multiples of 3.

#include<iostream>
using namespace std;
int main(){
    int num=50;
   for(int i=1;i<=num;i++){
       if(i%3==0)
        continue;
        cout<<i<<endl; 
    } 
    // while(i<=num){
    //     if(i%3==0)
    //     continue;
    //     i++;
    //     cout<<i<<endl;
    // }
    return 0;
}