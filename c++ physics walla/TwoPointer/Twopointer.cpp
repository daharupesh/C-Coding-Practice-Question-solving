#include<iostream>
#include<vector>
using namespace std;

void sortedArray(vector<int> &v){
     int countNoZero=0;
     for(int ele:v){
        if(ele==0){
            countNoZero++;
        }
     }
     cout<<countNoZero<<endl;
     for(int i=0;i<v.size();i++){
        if(i<countNoZero){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
     }
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    cout<<"Unsorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    sortedArray(v);
    cout<<"Sorted array is:"<<endl;  
    for(int i=0;i<n;i++){
        cout<<v[i]<<"  ";
    }

    return 0;
}
