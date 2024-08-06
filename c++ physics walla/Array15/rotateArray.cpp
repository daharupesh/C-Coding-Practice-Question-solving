#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Rotate the given array 'a' by k steps, where k is non-negative. NOte: k can be greater than n as well where n is the size of array 'a'.
    // int arr[]={1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int k=2;
    // k=k%size;
    // int arrRotate[size];
    // int j=0;
    // for(int i=size-k;i<size;i++){
    //     arrRotate[j++]= arr[i];
    // }
    // for(int i=0;i<size;i++){
    //     arrRotate[j++]= arr[i];
    // }
    // cout<<"The rotate array is:";
    // for(int i=0;i<size;i++){
    //     cout<<arrRotate[i]<<" ";
    // }
    // // for()
    // vector <int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // int k=2;
    // k=k%v.size();
    //Given Q queries , check if the given number is present in the array or not...
    // Note: Value of all the elements in the array is less than 10 to the power 5;
    //[2,3,5,6,7,8]

    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }

    const int N =1e5 +10;
    vector<int> freq(N,0);
    
    for(int i=0;i<n;i++){
        freq[v[i]]++;// freq[v[0]]=freq[12]++ =0++=1
                      // freq[v[1]]=freq[34]++ =0++=1
                        
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<freq[i];
    }
    cout<<endl;
   cout<<"Enter queries:";
   int q;
   cin>> q;
   while (q--)
   {
    int queryelement;
    cin>>queryelement;
    cout<<freq[queryelement]<<endl;
   }
   
    return 0;

}