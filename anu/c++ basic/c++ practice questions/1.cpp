#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    string Enrollment;
    int roll;
   void Name(string name, string Enrollment, int roll){
      cout<<"Name is "<<name<<endl;
      cout<<"Enrollment "<<Enrollment<<endl;
      cout<<"Roll no. "<<roll<<endl;
    }



};
int main(){
       Student priyanka; 
       priyanka.Name("Priyanka","22SDSCE01613",51);
       

}