#include <iostream>
using namespace std;
int largestValue =INT16_MIN;
int SecondMax(int array[], int size){
    int fistMax=0;
    int SecondMax=0;
    for(int i=0;i<size;i++){
        if(array[i]>fistMax){
            fistMax = array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>SecondMax && array[i]!= fistMax){
            SecondMax = array[i];
        }
    }

    return SecondMax;
}
int LargestIndex(int array[],int size){
    int index=-1;
    for(int i=0;i<size;i++){
       if(largestValue<=array[i]){
           largestValue = array[i];
           index = i;
           
       }
    }
    return index;

}
int main(){
    // Find the total number of pairs in array whose sum is equal to the given value of x..
            // int array[]={3,4,6,7,1};
            // int key= 10;
            // int countPair=0;
            // int size = 5;
            // for(int i=0;i<size;i++){
            //     for (int j =i+1 ; j < size; j++)
            //     {
            //         if(array[i]+array[j]==key){
            //              countPair++;
            //         }
            //     }
                
            // }
            // cout<<"the pair number:"<<countPair;
    // Count the number of triplets whose sum is equal to the given value x.
                // int array[]={3,1,2,4,0,6};
                // int size = 6;
                // int key=6;
                // int TripletSum =0;
                // for(int i=0;i<size;i++){
                //     for(int j=i+1;j<size;j++){
                //         for(int k=j+1;k<size;k++){

                //             if(array[i]+array[j]+array[k]==key){
                //             TripletSum++;
                //         }
                        
                //         }
                //     }
                // }
    // cout<<"Triplet sum is equal :"<<TripletSu
         
                 int array[]={2,3,1,3,2,4,1};
                 int size = sizeof(array)/sizeof(array[0]);
                //  for(int i=0;i<size;i++){
                //     for(int j=i+1;j<size;j++){
                //         if(array[i]==array[j]){
                //             array[i]=array[j]=-1;
                    
                //         }
                //     }
                //  }
                //  int countUnique = 0;
                //  for(int i=0;i<size;i++){
                //     if(array[i]>0){
                //         countUnique = array[i];
                //     }
                //  }
                //  cout<<"The usique value is:"<<countUnique;
    // Find the second largest element in the given Array...
                //  int largestElement=0;
                //  int array[]={2,3,5,7,6,6,7,3,1};
                //  int size = sizeof(array)/sizeof(array[0]);
                //  int largest = LargestIndex(array,size);
                //  for(int i=0;i<size;i++){
                //     if(array[i]== largestValue){
                //         array[i]=-1;
                //     }
                //  }
                // //  array[largest]= -1;
                //  for(int i=0; i< size;i++){
                //     if(largestElement<array[i]){
                //         largestElement=array[i];
                //     }
                //  }
                //  cout<<"Fist largest element is: "<<largestValue<<endl;
                //  cout<<"Second largest element is: "<<largestElement;

                // Shortest logic...........

    // int secondLargest = SecondMax(array,size);
    // cout<<"Second largest element is :"<<secondLargest;     

    
            
   return 0;
}