#include <iostream>
using namespace std;
void swape(int &a,int &b){
    int temp = a;
    a =b;
    b = temp;

}
void swape1(int a,int b){
    int temp = a;
    a =b;
    b = temp;

}
int main(){
    int x=10;
    int y=100;
    cout<<&x<<endl<<&y;
    swape(*&x,*&y);
    cout<<x<<"   "<<y;
    
    return 0;
}