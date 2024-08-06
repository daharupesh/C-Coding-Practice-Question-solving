#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter the alphabets:";
    cin>>alpha;
    switch (alpha)
    {
    case 'a':
         cout<<"vowel";
          break;
    case 'e':
         cout<<"vowel";
          break;
    case 'i':
         cout<<"vowel";
          break;

    case 'o':
         cout<<"vowel";
          break;
    case 'u':
         cout<<"vowel";
          break;  

    default:
        cout<<"consonant";
        break;
    }
    return 0;
}