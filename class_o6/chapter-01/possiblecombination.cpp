#include<iostream>
using namespace std;
int main(){
    int count=0;
    cout<<"Possible combination!!";
    for(int i=1;i<=3;i++){
        for (int j = 2; j <=3; j++)
        {
            for(int k=3;k<=3;k++){
              cout<<i<<j<<k<<"\n";
              count++;
            }
        }
        
    }
    cout<<endl;

    cout<<count;

}