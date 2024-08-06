#include <iostream>
using namespace std;
int main(){
    float moistue;
    cout<<"Enter the moisture level of soil: ";
    cin>> moistue;
    if(moistue>=0.5){
        cout<<"Soil is wet...";
    }
    else
    {
        cout<<"Soil is not wet...";
    }
}