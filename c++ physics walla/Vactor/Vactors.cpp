#include<iostream>
#include <vector>
using namespace std;
int main(){
    // Count the number of elements strictly greater than value of x.
    vector <int> v(6);
    bool ensure;
    cout<<v.size()<<endl;
    cout<<"Enter the number:";
    for(int i=0;i<6;i++){
        int number;
        cin>>number;
        v.push_back(number);
        }
     int key;
     int count=0;
     cout<<"Enter the key from where count: ";
     cin>>key;   
    for(int i=0;i<6;i++){
        if(v[i]==key){
            count = 6-i+1;
        }
    }  
    cout<<"The total number is :"<<count;  
    return 0;
}