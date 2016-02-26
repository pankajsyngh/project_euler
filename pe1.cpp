#include <iostream>
#include <math.h>
using namespace std;


void returns_multiple_array( int* arr, int a, int N ){
	
	for( int i = 0; i < floor(N/a); i = i + 1 ){
		arr[i] = a*(i+1);
	}
}

int main() {
	
	// Get the input on outer bound //
	cout << "Enter the upper bound (N) : \n";
	int N;
	cin >> N;		
	
	// Get multiple arrays for 3 //
	int size_arr_3 = floor(N/3);
	int arr_3[size_arr_3] = {};
	returns_multiple_array(arr_3, 3, N);
	cout << arr_3[0];
	
	// Get multiple arrays for 5 //
	int size_arr_5 = floor(N/5);
	int arr_5 [size_arr_5] = {};
	returns_multiple_array(arr_5, 5, N);
	cout << arr_5[0];
	
	// Get multiple arrays for 15 //
	int size_arr_15 = floor(N/15);
	int arr_15 [size_arr_15] = {};
	returns_multiple_array(arr_15, 15, N);
	cout << arr_15[0];
	//int a;
	//a = returns_multiple_array(3,N);
}
