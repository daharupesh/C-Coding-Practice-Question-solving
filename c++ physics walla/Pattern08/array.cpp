#include<iostream>
using namespace std;
int DigitNumber(int number){
    int n = number;
    int digit=0;
    while (n>0)
    {
      digit++;
      n = n/10;
      
    }
    return digit;

}
int main(){
    int countEven=0,countOdd=0;
    int a[]={2,23,1,234,2349,1010,1231,1111};
    for(int i=0;i<8;i++){

        if((DigitNumber(a[i]))%2==0){
            countEven++;
        }

        else{
            countOdd++;
        }
           
        // if(a[i]%2==0){
        //   countEven++;
        // }
        // else{
        //     countOdd++;
        // }

    }

    cout<<"Total even number is: "<<countEven<<endl;
    cout<<"Total odd number is: "<<countOdd;
    return 0;
}