#include<iostream>
using namespace std;
int main(){
    int size[4],small,large,cl,cs,cs1,cs2,cl1,cl2;
    string arr[4]={"2","19","20","3"};
    small=large=(arr[0]).size();
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    cout<<arrsize<<endl;

    for(int i=0;i<arrsize;i++){
        if(large<arr[i].size()){
            if(large=arr[i].size()){
                cl=i;
                cl1 = stoi(arr[i]);
                cl2 = stoi(arr[cl]);
                if(cl1>=cl2){
                    large = arr[i].size();
                }
            }
            large = arr[i].size();
            cl=i;
        }
        else if(small=arr[i].size()){
            if(small=arr[i].size()){
                cs=i;
                cs1 = stoi(arr[i]);
                cs2 = stoi(arr[cs]);
                if(cs1<=cs2){
                    small = arr[i].size();
                }
            }
            small = arr[i].size();
            cs=i;
        }
               
    }
    cout<<"largest number is:"<<arr[cl]<<endl;
    cout<<"small number is:"<<arr[cs]<<endl;
    return 0;
}