#include<iostream>
using namespace std;
int main(){
    cout<<"Right Half Pyramid..."<<endl;
    int row;
    cout<<"Enter the row:";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
   
   cout<<"Left Half Pyramid"<<endl;
   for(int i=1;i<=row;i++){
    for(int j=1;j<=row-i;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
   }
   cout<<"Full Pyramid: "<<endl;
   for(int i=1;i<=row;i++){
     for(int j=1;j<=row-i;j++){
        cout<<"  ";
     }
     for(int j=1;j<=2*i-1;j++){
        cout<<"* ";
     }
     cout<<endl;
   }

   cout<<"Inverted Right Half Pyramid"<<endl;
   for(int i=1;i<=row;i++){
    for(int j=1;j<=row-i+1;j++){
        cout<<"* ";
    }

    cout<<endl;
   }
   cout<<"Inverted Left Half Pyramid"<<endl;
   for(int i=1;i<=row;i++){
    for(int j=1;j<=i-1;j++){
        cout<<"  ";
    }
    for(int j=1;j<row-i+1;j++){
        cout<<"* ";
    }
    cout<<endl;
   }
  cout<<"Inverted Full Pyramid:"<<endl;
   for(int i=1;i<=row;i++){
      for(int j=1;j<=i-1;j++){
        cout<<"  ";
      }
      for(int j=1;j<=row-i+1;j++){
        cout<<" * ";
      }
      cout<<endl;
   }
   
//    cout<<"Rhombus Pattern"<<endl;
//    int r=5,c=4;
//    for(int i=1;i<=r;i++){
//       for(int j=1;j<=)
//    }
    return 0;
}