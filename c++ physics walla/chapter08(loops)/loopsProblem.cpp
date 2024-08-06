#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Enter the number:";
    cin>> number;

    //*****************Using while loop******************
    // while (number>0)
    // {  
    //     count++;
    //     number = number/10;
        
        
    // }
    // cout<<"total number of digit is: "<<count<<endl;

    //*******************Using foor loop*******************
    // for(int i=number;i>0;number)
    // {
    //     count++;
    //     number=number/10;
    // }

    // cout<<"total number of digit is: "<<count<<endl;

    //**************Find the sum of digita in a given number n.****************

                // while(number>0){

                //     int remedar=number%10;
                //     sum = sum + remedar;
                //     number = number/10;

                // }
                // cout<<"sum of digits is :"<<sum<<endl;
    //**************Find the sum of digita in a given number n.****************
                    // while(number>0){

                    //     int remedar=number%10;
                    //     sum = sum*remedar;
                    //     number = number/10;

                    // }
                    // cout<<"sum of digits is :"<<sum<<endl;
                    
    //***************Reverse the digits of a number*********************
                //    while(number>0){
                //         int lastdigit = number%10;
                //         sum = sum*10+lastdigit;    
                //         number = number/10;
                //     }
                // cout<<"sum of digits is :"<<sum<<endl;     


    //************Find the sum of following series*************************

            //    for(int i=1;i<=number;i++){
            //       if(i%2==1){
            //         sum = sum+i;
            //       }
            //       else{
            //         sum =sum-i;
            //       }
            //    } 
            //    cout<<sum; 

    //***********Print the first n factorial number**************************

            //  int fact=1; 
            //  for(int i=1;i<=number;i++){
            //     fact=fact*i;
            //  } 
            //  cout<<fact; 

    //*************Given 2 numbers a and b find a raise to the power b.********

            //   int result=5;
            //   for(int i=1;i<number;i++){
            //     result*=result;
            //   }
            //   cout<<result;

    //                          
     return 0;
}