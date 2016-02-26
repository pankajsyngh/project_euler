#include <iostream>
#include <math.h>
#include <valarray>

using namespace std;

// this function returns the array of multiples //
// the number for which the multiples are calculated is a //
// the upper bound for this multiple calculation is N //
void returns_multiple_array( int* arr, int a, int N ){
	
	for( int i = 0; i < floor(N/a); i = i + 1 ){
		arr[i] = a*(i+1);
	}
}

// this function returns the sum of all the elements of the array //
int returns_arr_sum (int* arr, int max){
	
	int sum = 0;
	for( int i = 0; i < max; i = i +1){
		sum = sum + arr[i];
	}
	return sum;
}

// The main function calculates the sum of all the numbers which are the multiple of 3 and 5 //
int main() {
	
	// Get the input on outer bound //
	cout << "Enter the upper bound (N) : \n";
	int N;
	cin >> N;	
	N = N - 1;	
	system("CLS");
	
	// If N is less than 3, the result is 0 //
	if (N < 3){
		cout << "Sum is " << 0 << "\n";
	}
	
	// If N is between 3 and 5 //
	if (N < 5 && N >= 3){
		cout << "Sum is " << 3 << "\n";
	}
	
	// If N is greater than 5 but less than 15 //
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
	
	// If N is greater than 15 //
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
