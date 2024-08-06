#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the rows:";
    cin>> row;
    for( int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Enverted version"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--){
              cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Inverted another logic"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}