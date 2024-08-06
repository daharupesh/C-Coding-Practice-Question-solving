#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector <int> v(n,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    for(int i=0; i<n; i++){
        v[i]+=v[i-1];
    }
    cout<<"Enter quarry:";
    int query;
    cin>>query;
    while (query--)
    {
        int r,l;
        cin>>l>>r;
        int ans= 0;
        ans = v[r]-v[l-1];
        cout<<"Answer is:"<<ans;
    }
    
    return 0;
}