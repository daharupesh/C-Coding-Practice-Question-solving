#include <iostream>
using namespace std;
int main(){
    cout<<"Left Half Pyramid"<<endl;
    int row;
    cout<<"Enter the row:";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<"Another logic of Half Pyramid::"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
       cout<<endl;
    }

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=row-i){
                cout<<"  ";

            }
            else{
                cout<<"* ";
            }

        }
        cout<<endl;
    }
    cout<<"Another Logic Right Half Pyramid::"<<endl;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"The end"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"Full Pyramid..."<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=row-i){
                cout<<" ";

            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    cout<<"Inverted Right Half Pyramid"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=row-i+1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<"Inverted Left half Pyramid"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1; j<=row;j++){
            if(j<=i-1){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    cout<<"Another logic of Left half Pyramid"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=row-i+1;j++){
            cout<<"* ";
        }

        cout<<endl;
    }
    cout<<"Inverted full pyramid:"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=i-1){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    cout<<"Inverted full pyramid with another logic..."<<endl;
    for(int i=i;i<=row;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=row-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Rhombus pattern"<<endl;
    int col=4;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i-1;j++){
           cout<<" ";
            }
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }    
        cout<<endl;
    }
    cout<<"Diamond Pattern"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=row-i+1){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i=2;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=i){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
     cout<<"Another method Diamond Pattern"<<endl;
     for(int i=1;i<=row;i++){
        for(int j=1; j<=row-i+1;j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
     }
     for(int i=2;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=row-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
     }
  
    cout<<"Hourglass pattern"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=i-1){
              cout<<" ";
            }
            else{
                cout<<"* ";
            }
          
        }
        cout<<endl;
    }
    for(int i=2;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<=row-i){
                cout<<" ";

            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    cout<<"Hollow Square Pattern:"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i==1||j==1||i==row||j==row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
 cout<<"Hollow full pyramid"<<endl;
 for(int i=1;i<=row;i++){
    for(int j=1;j<=2*row;j++){
        if((i==row && j%2==1) ||i+j==row+1 || j-i==row-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }
 cout<<"Inverted Hollow Inverted pyramid..."<<endl;
 for(int i=1;i<=row;i++){
    for(int j=1; j<=2*row; j++){
        if((i==1 && j%2!=0) || i==j || i+j==2*row){
            cout<<"*";
        }  
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }
//  cout<<"inverted hollow diamond pyramid"<<endl;
//  for(int i=1;i<=row;i++){
//     if(i<=int(row/2))
//     for(int j=1;j<=row;j++){
//        if(i+j== int(row/2)-1 || j-i== int(row/2)+1){
//         cout<<"*";
//        } 
//        else{
//         cout<<" ";
//        }
//     }
//     if(i>=int(row/2) && i<=row)
//     {
    
//     }
//  cout<<endl;
//  }
int n=1;
cout<<"floud triangle.."<<endl;
for(int i=1; i<=row; i++){
    for(int j=1;j<=i;j++){
      cout<<n++<<" ";
    }
    cout<<endl;
}
cout<<"Pascle triangle"<<endl;
int c=1;

    for(int i = 0; i < row; i++) {
        for(int space = 1; space <= row-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c*(i-j+1)/j;

            cout << c << "   ";
        }
        cout << endl;
    
}

  return 0;
}