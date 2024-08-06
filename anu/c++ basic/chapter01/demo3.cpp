#include<iostream>
using namespace std;

class Circle{
    int radius;
    public:
    void CalcuateArea(){
        float area=2*3.14*radius*radius;
        cout<<area;
    }
};
int main(){
    Circle mycircle;
    double radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    float area = mycircle.CalcuateArea();
    cout<<"Area: "<<area<<endl;
    return 0;
    

}