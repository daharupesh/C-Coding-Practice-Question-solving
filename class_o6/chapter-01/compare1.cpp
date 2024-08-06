// Logic to find greater and smaller number among the list of number....
#include<iostream>
using namespace std;
int main(){
    long int arr[5],large,small,n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    cout<<"Enter your array element:\n";
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
    large=small=arr[0]; 
    for(int i=0;i<n;i++){
         
         
      if(large<arr[i]){
          large=arr[i];
          
      }
      else if(small>arr[i]){
        small = arr[i];
      }
}
      cout<<"small number is:"<<small<<"\n";
      cout<<"large number is:"<<large;
   return 0;
}