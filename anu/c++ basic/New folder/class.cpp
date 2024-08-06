#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    string Enrollment;
    int roll;
   void get(string name, string Enrollment, int roll){
      cout<<"Name is "<<name<<endl;
      cout<<"Enrollment "<<Enrollment<<endl;
      cout<<"Roll no. "<<roll<<endl;
    }



};
int main(){
       Student s1,s2,s3;
       
       s1.get("Priyanka","22SDSCE01613",51); // calling the method by object...
       s2.get("Rani","22SDSCE01613",51); // calling the method by object...
       s3.get("Kajal","22SDSCE01613",51); // calling the method by object...
      
       


       

}