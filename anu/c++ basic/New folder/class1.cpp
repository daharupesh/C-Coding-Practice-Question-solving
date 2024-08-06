#include<iostream>
using namespace std;
class Demo{
  
  public:
  int a;
  void set(){
    cout<<"Enter the value of a:";
    cin>>a;
  }
  void get(int a){
    cout<<"a="<<a<<endl;
  }
  void add(int b,int c){
    cout<<"a + b is equal to "<<c+b<<endl;
  }
};

int main(){
    Demo d1,d2,d3;
    d1.set();
    d2.get(12);
    d3.add(15,30);

}