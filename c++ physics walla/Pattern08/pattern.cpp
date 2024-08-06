#include <iostream>
using namespace std;
int main(){
    // rectangular pattern...
    // cout<<endl<<endl<<endl;
    // for(int i=0;i<=3;i++){
    //     for(int j=0;j<=5;j++){
    //         cout<<"*         ";
    //     }
    //     cout<<endl<<endl<<endl<<endl<<endl;
    // }

    // triangle pattern...

    for (int i = 0;i<10; i++)
    {
          for(int j=0;j<11;j++){
            cout<<j;
            cout<<"----";
         }
         cout<<endl;
         for(int k=0;k<11;k++){
          cout<<"+    ";
         }
       cout<<endl;
      //  if(i==3){
      //   continue;
      //  }
      // cout<<"|"<<endl;

       
    }

    
}