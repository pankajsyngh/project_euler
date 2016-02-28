#include <iostream>
#include <math.h>

using namespace std;

// The main function calculates the sum of all the numbers which are the multiple of 3 and 5 //
int main() {
	
	// Get the input on outer bound //
	cout << "Enter the upper bound (N) : \n";
	int max_N;
	cin >> max_N;	
	system("CLS");
	
    // Initiate the variables //
	int n;							//index of the highest Fibonacci number below max_N
	double phi1, phi2;				//golden ratio and its inverse
	
	// assigning values to phi1 and phi2 //
	phi1 = 0.5*(1 + sqrt (5));
	phi2 = 0.5*(1 - sqrt (5));
	
	// getting the index of the Fibonacci number within the max_N //
	n = floor((1.0/3.0)*log(0.5*(sqrt(5.0)*max_N + sqrt(5.0*max_N*max_N + 4)))/log(phi1));
	
	// The highest Fibonacci number //
	int an = (1/sqrt(5.0))*(pow(phi1, 3*n) - pow(phi2, 3*n));
	
	// the sum of the required sequence //
	int sum = (1/sqrt(5.0))*((1 - pow(phi1, 3*n+3))/(1 - pow(phi1, 3))- (1 - pow(phi2, 3*n+3))/(1 - pow(phi2, 3)));
	
	cout << "The index of 4000000 in Fibonacci series is : " << sum;
	
	
	// If N is greater than 5 but less than 15 //
//	int multiple_3_sum = returns_arr_sum(3, floor(N/3));
//	int multiple_5_sum = returns_arr_sum(5, floor(N/5));	
//	int multiple_15_sum = returns_arr_sum(15, floor(N/15));
//	
//	int sum = multiple_3_sum + multiple_5_sum - multiple_15_sum;
//	cout << "Sum is " << sum << "\n";
}
