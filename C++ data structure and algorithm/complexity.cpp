#include <stdio.h> 

int LINEAR_SEARCH(int inp_arr[], int size, int val) //t1=size+1+size+1=2+2size = size
{ 
	 
	for (int i = 0; i < size; i++) // size+1
		if (inp_arr[i] == val) // size
			return i; //1
	return -1; //1
} 


int main(void) 
{ 
	int arr[] = { 10, 20, 30, 40, 50, 100, 0 }; //1
	int key = 100; //1
	int size = 10; //1
	int res = LINEAR_SEARCH(arr, size, key); //size
	if (res == -1)
	printf("ELEMENT NOT FOUND!!");
    else
    printf("Item is present at index %d so time complexity of this program is %d:", res,res); //size
    
	return 0; 
}
// time complexity of binary search is O(n)
