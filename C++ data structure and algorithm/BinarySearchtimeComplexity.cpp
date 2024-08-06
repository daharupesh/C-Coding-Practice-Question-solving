#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {//n/2
  if (high >= low) {
    int mid = low + (high - low) / 2;  //n/2

    // If found at mid, then return it
    if (array[mid] == x)
      return mid; //n/2

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1); //n/2

    // Search the right half
    return binarySearch(array, x, mid + 1, high);  //n/2
  }

  return -1; //1
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9}; //1
  int x = 9; //1
  int n = sizeof(array) / sizeof(array[0]); //1
  int result = binarySearch(array, x, 0, n - 1); //n/2
  if (result == -1){
     cout<<"NOt found"; //1
  }
    // printf("Not found");
  else{
      cout<<"Element is found at index "<<result<<"Time coplexity of this program is "<<result; //1
  }
    // printf("Element is found at index %d", result);
}

// Time complexity of binary search is :  n/2+n/2+n/2+n/2+1+1+1+n/2+n/2+1=4+5(n/2)= so the time complexity of binary search is O(log(n))--average case