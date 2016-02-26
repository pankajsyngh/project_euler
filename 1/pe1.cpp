#include <iostream>
#include <math.h>
#include <valarray>

using namespace std;


void returns_multiple_array( int* arr, int a, int N ){
	
	for( int i = 0; i < floor(N/a); i = i + 1 ){
		arr[i] = a*(i+1);
	}
}

int returns_arr_sum (int* arr, int max){
	
	int sum = 0;
	for( int i = 0; i < max; i = i +1){
		sum = sum + arr[i];
	}
	return sum;
}

int main() {
	
	// Get the input on outer bound //
	cout << "Enter the upper bound (N) : \n";
	int N;
	cin >> N;	
	N = N - 1;	
	system("CLS");
	// If the N is less than 3, the result is 0 //
	if (N < 3){
		cout << "Sum is " << 0 << "\n";
	}
	
	if (N < 5 && N >= 3){
		cout << "Sum is " << 3 << "\n";
	}
	
	if (N < 15 && N >= 5){
		int size_arr_3 = floor(N/3);
		int arr_3[size_arr_3] = {};
		returns_multiple_array(arr_3, 3, N);
		
		int size_arr_5 = floor(N/5);
		int arr_5 [size_arr_5] = {};
		returns_multiple_array(arr_5, 5, N);
		
		int arr_3_sum = returns_arr_sum(arr_3, size_arr_3);
		int arr_5_sum = returns_arr_sum(arr_5, size_arr_5);
	
		int sum = arr_3_sum + arr_5_sum;
		cout << "Sum is " << sum << "\n";
	}
	
	if (N >= 15){
		int size_arr_3 = floor(N/3);
		int arr_3[size_arr_3] = {};
		returns_multiple_array(arr_3, 3, N);
		
		int size_arr_5 = floor(N/5);
		int arr_5 [size_arr_5] = {};
		returns_multiple_array(arr_5, 5, N);
		
		int size_arr_15 = floor(N/15);
		int arr_15 [size_arr_15] = {};
		returns_multiple_array(arr_15, 15, N);
		
		int arr_3_sum = returns_arr_sum(arr_3, size_arr_3);
		int arr_5_sum = returns_arr_sum(arr_5, size_arr_5);
		int arr_15_sum = returns_arr_sum(arr_15, size_arr_15);
	
		int sum = arr_3_sum + arr_5_sum - arr_15_sum;
		cout << "Sum is " << sum << "\n";
	}
}
