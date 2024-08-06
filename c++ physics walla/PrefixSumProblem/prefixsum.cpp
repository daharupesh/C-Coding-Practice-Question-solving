#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector <int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+v[i];
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

    prefixSum(v);
    
    cout<<"Prefix sum:";
    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}