#include <iostream>
using namespace std;

class Demo{
    int a;
    public:void set(int p){
        a = p;
    }

    void get(){
        cout<<a;
    }

    void add(int a, int z){
        int ans = a+z-a;
        cout <<ans;
    }
};

int main(){
    Demo d1,d2;
    d1.set(5);
    d1.get();
    cout<<endl;
    d1.add(12,14);
    cout<<endl;
    d2.set(10);
    d2.get();
    cout<<endl;
    d1.add(12,14);
    return 0;
} 