#include<iostream>
using namespace std;

int main()
{
    int row=4;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            if(i==j){
                cout<<10-j<<" ";
            }
            else if(i==j+row-3){
                cout<<4+j<<" ";
            }
            else if(i==j+row-2){
                cout<<3-j<<" ";
            }
            else if(i==j+row-1){
                cout<<1+j<<" ";
            }
            else{
                cout<<"* ";

            }
        }
        cout<<endl;
        
    }

}