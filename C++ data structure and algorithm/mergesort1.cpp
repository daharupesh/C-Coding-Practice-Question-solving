#include<iostream>
using namespace std;
void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {      
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {    
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Take array input:";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"merge sort"<<"\n";
    cout<<"Array before sorting:";
    display(arr,n);
    mergeSort(arr, 0, n-1);     
   cout << "Array after Sorting: ";
   display(arr, n);

}
//time complexity :- total time to taken by the programmer to execute that is time complexity..
//Performance analysis:
// types of time complexity linear and constant time complexity

// Cons
