// Calculate the velocity of an object with a mass of 5 kilograms and a momentum of 20 kg·m/s.
#include<iostream>
using namespace std;
int main(){
    int velocity,mass,momentum;
    cout<<"Enter the mass:";
    cin>>mass;
    cout<<"Enter the momentum";
    cin>>momentum;
    velocity=momentum/mass;
    cout<<"the velocity is :"<<velocity<<endl;

    return 0;
}