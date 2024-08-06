#include <iostream>
using namespace std;
int TallestMan(int arr[],int size){
    // Write a program to find who is tallest?
    //160,154,158,159
    int tallest=arr[0];
    for(int i=0;i<size; i++){
       if(tallest<arr[i]){
          tallest = arr[i];
        
       }
    }
    return tallest;
}
int TallestManIndex(int arr[],int size){
    // Write a program to find who is tallest?
    //160,154,158,159
    int tallest=arr[0];
    int index =0;
    for(int i=0;i<size; i++){
       if(tallest<arr[i]){
          tallest = arr[i];
          index = i;
       }
    }
    return index;
}
int main(){
    int n;
    cout<<"Enter the number of person:";
    cin>>n;
    int arr1[n];
    string arr0[n];
    cout<<"Enter the name of person sequacially:";

    for(int i=0; i<n; i++){
        cin>>arr0[i];
    }

    cout<<"Enter the height on the basis of person:";
    for(int i=0; i<n ; i++){
        cin>>arr1[i];
    }
    
    cout<<"Tallest man is "<<arr0[TallestManIndex(arr1,n)]<<" his height is "<<TallestMan(arr1,n)<<" cm";


    return 0;
}