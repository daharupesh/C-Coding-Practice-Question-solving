// print the sum of stream of n integers in input taken by using do while loop
#include<iostream>
using namespace std;
int main(){
    int n,num;
    int sum=0;
    cout<<"Enter the number:";
    cin>>n;
    do{ cout<<"numbers:";
        cin>>num;
        sum=sum+num;
        n--;
    }while(n>0);
    // do{
    //     sum=sum+i;
    //     i++;
    // }while(i<=n);
    

    cout<<"sum is: "<<sum<<endl;
}