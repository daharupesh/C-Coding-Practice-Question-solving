// Design calculator to perform basic operation(+,/,-,*,%)
#include<iostream>
using namespace std;
int main(){
    int n1,n2,result;
    char ch;
    cout<<"Which operation want to perform + ,*,-,%,/ :";
    cin>>ch;
    switch (ch)
    {
    case '+':
                cout<<"Enter n1:";
                cin>>n1;
                cout<<"Enter n2:";
                cin>>n2;
                result = n1+n2;
                cout<<"Addition is "<<result<<endl;
            
        break;
    case '-':
                cout<<"Enter n1:";
                cin>>n1;
                cout<<"Enter n2:";
                cin>>n2;
                result = n1-n2;
                cout<<"Subtraction is "<<result<<endl;
            
        break;    
    
    case '*':
                cout<<"Enter n1:";
                cin>>n1;
                cout<<"Enter n2:";
                cin>>n2;
                result = n1*n2;
                cout<<"Multiplication is "<<result<<endl;
            
        break;

    case '/':
                cout<<"Enter n1:";
                cin>>n1;
                cout<<"Enter n2:";
                cin>>n2;
                result = n1/n2;
                cout<<"Division is "<<result<<endl;
            
        break; 

    case '%':
                cout<<"Enter n1:";
                cin>>n1;
                cout<<"Enter n2:";
                cin>>n2;
                result=n1%n2;
                cout<<"modulo is "<<result<<endl;
            
        break;       
    default:
          cout<<"Invalid input";
        break;
    }
   

    return 0;

    
}