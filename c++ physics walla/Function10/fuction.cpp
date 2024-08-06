#include<iostream>
using namespace std;
void Welcom(string name){
    cout<<"welcome "+name;
}
//**********Print square of first 5 natural number********
            // void squareNatural(int n){
            //     for (int i = 1; i<=n; i++)
            //     {
            //         cout<<i*i<<"   ";
            //     }
                
            // }
           int squareNatural(int n){
            return n*n;
           }            
//*********Write a fuction to print the area and circumference of the circle*********//
             float AreaCircle(float r){
                return 3.14*r*r;
             }
             float Circumference(float r){
                return 2*3.14*r;
             }

             string Vote(int age){
                if(age<=17){
                    return "No";
                }
                else{
                    return "Yes";
                }
             }
 //**********Two numbers a and b write the to print the odd number between them.********            
          bool Odd(int n){
            if(n%2!=0){
                return true;
            }
            else{
                return false;
            }
          }
          bool prime(int n){
            if(n==1){
                    return false;
                }
            for(int i=2;i<=n;i++){           //n/2 and squareroot(n)or i*i<=n;
                if(n%i==0){
                    
                    return false;
                }
                

            }
          }

int main()
{
          string name="Rupesh";
          Welcom(name);
          cout<<endl;
          int number = 5;
          for(int i=1;i<=number;i++){
             cout<<squareNatural(i)<<" ";
          }
          cout<<endl;
           float r = 3;
           cout<<AreaCircle(r)<<endl;
           cout<<Circumference(r);

           cout<<endl;
           cout<<"when age is 15 then "<<Vote(15)<<endl;
           cout<<"When age is 19 then "<<Vote(19);
           cout<<endl;

           int x=1,y=10;
           for(int i=x;i<=y;i++){
               if(Odd(i)==true){
                 cout<<i<<" is Odd"<<endl;
               }
               else {
                cout<<i<<" is Even"<<endl;
               }
           }
           cout<<endl;
        //    cout<<prime(9);
           int a=2;
           int b=50;
           for(int i=a;i<=b;i++){

            if(prime(i)== true){
                cout<<i<<" ";
            }
           
           }
          
}