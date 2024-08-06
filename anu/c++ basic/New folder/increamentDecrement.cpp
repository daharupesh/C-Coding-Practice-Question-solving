#include<iostream>
using namespace std;

int main()
{
   int x=10;
   int w=20;
   int y=15;
   int z;

 y=++x;
 z=w--;
 cout<<x<<endl;
 cout<<y<<endl;
 cout<<z<<endl;
 cout<<w<<endl;
 x=(z++)+(++z);
 cout<<x<<endl;
 cout<<y<<endl;
 cout<<z<<endl;
 cout<<w<<endl;

}