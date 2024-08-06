#include<iostream>
#include <vector>
using namespace std;
int main(){
    // int n;
    // cout<<"Size of array:";
    // cin>>n;
    // vector <int> v(n);
    // for(int i=0; i<n; i++){
    //     cin>>v[i];
    // }

    // const int N = 1e5+10;
    // vector <int> freq(N,0);
    // for(int i=0;i<n;i++){
    //     freq[v[i]]= freq[v[i]]+1;
    //     }
    // int q;
    // cout<<"Choose query:";
    // cin>>q;
    // while (q>0)
    // {
    //     int querryElement;
    //     cin>>querryElement;
    //     cout<<freq[querryElement];
    //     q--;
    //  }
    
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int N = 1e6+10;
    vector <int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    cout<<"Frequecy vector is:";
    for(int i=0;i<n;i++){
        cout<<freq[i];
    }

    int q;
    cout<<"querry element no:";
    cin>>q;
    while(q--){
        int countquery;
        cin>>countquery;
        cout<<freq[countquery]<<endl;
    }


    return 0;
}