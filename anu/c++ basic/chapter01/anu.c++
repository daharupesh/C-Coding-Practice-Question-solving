#include<iostream>
using namespace std;
class Time{
    int hr;
    int min;
    public:
    void time()
    {
        cout<<"enter a hour:";
        cin>>hr;
        cout<<"enter a minut:";
        cin>>min;
    }

void display()
        {
            cout<<hr<<endl;
            cout<<min<<endl;
        }

};
int main(){

   Time t;
   t.time();
   t.display();
   return 0;


}
