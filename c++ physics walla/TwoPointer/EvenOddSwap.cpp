#include <iostream>
#include <vector>
using namespace std;
void EvenOddSortingOrder(vector <int> &v){
      int left_ptr =0;
      int right_ptr =v.size()-1;
      while (left_ptr<right_ptr)
      {
          if(v[left_ptr]%2 !=0 && v[right_ptr]%2 ==0){
            swap(v[left_ptr],v[right_ptr]);
               left_ptr++;
               right_ptr--;
          }
          if(v[left_ptr]%2==0){
            left_ptr++;
          }
          if(v[right_ptr]%2 !=0){
            right_ptr--;
          }
      }
      return;
      
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    EvenOddSortingOrder(v);
    cout<<"Final sorted array:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}