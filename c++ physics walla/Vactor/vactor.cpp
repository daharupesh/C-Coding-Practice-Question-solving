#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    vector <int> v1;
    v.clear();
    for(int i=1;i<=5;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    cout<<v.size()<<endl;
    cout<<"Value is :";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // for(auto i= v.begin();i!=v.end();++i){
    //     cout<<*i<<" "<<endl;
    // }
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    
    // cout<<v[v.capacity()]<<endl;
    // v.resize(12);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    // v.resize(13);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v1.empty()<<endl;
    // cout<<v1.size()<<endl;
    // v.shrink_to_fit();
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    // Elements access
    // cout << "\nReference operator [g] : g1[2] = " << v[2];
 
    // cout << "\nat : g1.at(4) = " << v.at(4);
 
    // cout << "\nfront() : g1.front() = " << v.front();
 
    // cout << "\nback() : g1.back() = " << v.back();
    // // point ting to the fist element
    // int* pos = v.data();
 
    // cout << "\nThe first element is " << *(pos+1);
 
    

    
}