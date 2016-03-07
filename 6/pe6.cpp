#include <iostream>
#include <math.h>

using namespace std;

// The main function calculates the sum of all the numbers which are the multiple of 3 and 5 //
int main() {

// Get the input on outer bound //
cout << "Enter the upper bound (N) : \n";
int n;
cin >> n;

// If N is greater than 5 but less than 15 //
int sum_of_n = n*(n + 1)/2;
int sum_of_n_squared = n*(n + 1)*(2*n + 1)/6;
int diff = sum_of_n*sum_of_n - sum_of_n_squared;

cout << "The difference is " << diff << "\n";
}
