#include <iostream>
#include <vector>
using namespace std;

bool checkParticianPossible(vector <int> &v){
    int total_sum =0;
    for(int i=0; i<v.size();i++){
        total_sum +=v[i];
    }
    int prefix_sum =0;
    for(int i=0; i<v.size();i++){
        prefix_sum=prefix_sum+v[i];
        int sufix_sum = total_sum - prefix_sum;
        if(sufix_sum==prefix_sum){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    if(checkParticianPossible(v)==true){
        cout<<"Partician possible" ;
    }
    else{
        cout<<"Partician not possible";
    }
    
    return 0;
}