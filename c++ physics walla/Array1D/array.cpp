#include <iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4};
    cout<<sizeof(array)<<endl;
    int array1[4];
    int size = sizeof(array1)/sizeof(array1[0]);

    // Accessing array by using for loop........
                // for (int i = 0; i < size; i++)
                // {
                //     cout<<array[i]<<endl;
                // }           
    // printing array by using for each loop
        //    for(int element:array){
        //       cout<<element<<endl;
        //    } 
    // Printing array by using while loop
        //    int i = 0;
        //    while (i<size)
        //    {
        //     cout<<array[i]<<endl;
        //     i++;
            
        //    }
    // Printing array by using do while loop
        //  int i=0;
        //   do{
            
        //     cout<< array[i]<<endl;
        //     i++;
        //   }while(i<size);                
 // Take the input        
        // for(int i=0;i<size;i++)
        // {
        //     cin>>array1[i];
        // }
         
        // for(int &element:array1){
        //       cin>>element;
        //    } 

        // int i = 0;
        //    while (i<size)
        //    {
        //     cin>>array1[i];
        //     i++;
            
        //    }
         int i=0;
          do{
            cin>>array1[i];
            i++;
          }while(i<size); 

// Print the output of sum of all elements of array
        //   int sum=0;
        //   cout<<"Output "<<endl;
        //    for (int i = 0; i<size; i++)
        //     {
        //       sum = sum + array1[i];
        //     }    
        //   cout<<"Sum of all the elements is :"<<sum;
// Find the maximum value of all the elements from the array.......
        // int maxValue=array1[0];
        // int smallestValue = array1[0];  
        // for(int i=0;i<size;i++){
        //      if(maxValue<=array1[i]){
        //         maxValue = array1[i];
        //      }
        //      else{
        //         smallestValue=array1[i];
        //      }
        // }
        // cout<<"smallest value of array is:"<<smallestValue<<endl;
        // cout<<"largest value of array is:"<<maxValue<<endl;
// search the element is present or not.....
    //    int index = -1;
    //    bool value;
    //    int search =12;
    //    for(int i=0;i<size;i++){
    //      if(array1[i]==search){
    //          index = i;
    //          value = true;
             
    //      }
    //     else{
    //         value = false;
    //      }
    //    }
    //    if(value = true){
    //      cout<<"Element is present on index "<<index;
    //    }
    //    else{
    //       cout<<"Element is not present " <<index;
    //    }
       
       
        
}