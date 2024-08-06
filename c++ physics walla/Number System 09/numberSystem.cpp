#include <iostream>
using namespace std;
// int power(int value,int degree);
// int power(int value, int degree){
//     int pow = value;
//     for(int i=1;i<degree;i++){
//           pow *=pow;
//     }
//     return pow;
// }
int main(){
    //************** How to convert number from binary to decimal*********//
                // int n,sum=0,power=1;
                // cout<<"Enter the binary number:";
                // cin>>n;
                // while (n>0)
                // {
                //     int lastDigit = n%10;
                //     sum = sum + lastDigit*power;
                //     power*=2;
                //     n=n/10;
                // }

                // cout<<"Value is: "<<sum;
    //************ How to convret decimal to Binary******************

    int n, ans=0, power=1;
    cout<<"Enter the Decimal Number: ";
    cin>> n;
    while (n>0)
    {
      int parigidit = n%2; // 1  5//1 2//0 1
      ans = ans + parigidit*power; //1+
      power*=10;
      n= n/2;
    }
    cout<<"Banary number is:"<<ans;
    


    return 0;
}