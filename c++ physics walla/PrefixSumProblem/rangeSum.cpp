#include <iostream>
#include <vector>
using namespace std;
int sumRange(vector <int> &v,int l,int r){
    int Sum_range_r =0;
    int ans;
    int sum_range_l=0;
    for(int i=0; i<l-1; i++){
        sum_range_l+=v[i]; 
    }
    for(int i=0;i<r;i++){
        Sum_range_r+=v[i];
    }

    ans = Sum_range_r -sum_range_l;
    return ans;
}
int main(){
    int n,l,r;
    cout<<"Enter the size:";
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"Enter the range: between";
    cin>>l;
    cin>>r;
    cout<<"sum of in range:"<<sumRange(v,l,r);
    return 0;
}