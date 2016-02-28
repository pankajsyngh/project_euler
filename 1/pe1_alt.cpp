#include <iostream>
#include <math.h>

using namespace std;

int returns_arr_sum (int a, int n){
	
	int sum = a*0.5*n*(n + 1);
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
	
	// Get sum multiples of 3 //
	
	
	// If N is greater than 5 but less than 15 //
	int multiple_3_sum = returns_arr_sum(3, floor(N/3));
	int multiple_5_sum = returns_arr_sum(5, floor(N/5));	
	int multiple_15_sum = returns_arr_sum(15, floor(N/15));
	
	int sum = multiple_3_sum + multiple_5_sum - multiple_15_sum;
	cout << "Sum is " << sum << "\n";
}
