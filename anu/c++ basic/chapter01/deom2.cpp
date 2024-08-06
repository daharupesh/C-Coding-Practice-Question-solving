#include <iostream>
using namespace std;
int main(){
    int bag;
    string way;
    cout<<"Enter the number of bag:";
    cin>>bag;
    cout<<"Choose the way to go:";
    cin>>way;
    if(way=="stair"){
        if(bag<5 ){
            cout<<"we can handly by ourself no need to help others";
        }
      else if(bag<10){
          cout<<" we can not handly by ourself we need help others at least need 3 friends to carry my laugate to keep my room ";
      }
      else if(bag>10){
              cout<<" We really need help at least need more than 4 friends to carry my lauage to keep my room";
      }   
      }
    else{
        cout<<"we not have option to go by lift";
    }
    
    return 0;
}