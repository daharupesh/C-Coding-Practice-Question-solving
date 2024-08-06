#include<iostream> 
using namespace std;

int main()
{
    string descision;
    cout<<"Do you have book yes or no:";

    cin>>descision;
    if(descision=="yes"){
        cout<<"you have to chose path by your hostel to go mess"<<endl;
        cout<<"thank you";
    }
    else{
        cout<<"please choose direct path to go to the mess "<<endl;
        cout<<"thank you";
    }
    return 0;
}