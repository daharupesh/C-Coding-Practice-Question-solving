#include <iostream>
#include<cmath>
#include <vector>
using namespace std;
void sqauareSortedArray( vector<int> &v){
       vector <int> ans;
       int left_ptr = 0;
       int right_ptr = v.size()-1;
       while (left_ptr<right_ptr)
       {
           if(abs(v[left_ptr])<=abs(v[right_ptr])){
               ans.push_back(v[right_ptr]*v[right_ptr]);
               right_ptr--;
       
            
           }
           else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++; 
           }
       }
       cout<<"sorted array is:";
       for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
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
    sqauareSortedArray(v);
    // cout<<"Final sorted array:";
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    return 0;
}