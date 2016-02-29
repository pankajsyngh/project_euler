#include <iostream>
#include <math.h>

using namespace std;

// The main function calculates the sum of all the numbers which are the multiple of 3 and 5 //
int main(){
	
	// Get the input on outer bound //
	cout << "Enter the upper bound (N) : \n";
	int max_N;
	cin >> max_N;	
	system("CLS");
	
    // Initiate the the variables //
	int an_minus_2 = 0;							//  FIRST TWO TERMS OF
	int an_minus_1 = 1;							//  THE FIBONACCI SERIES
	
	int an, sum;								// initiating variables for the n th term and sum of the terms
	
	sum = 0;
	an = an_minus_1 + an_minus_2;	
	
	while( an < max_N ){
		
		cout << an << "\n";
			
		if ( an%2 == 0 ){
			sum = sum + an;
		}
		an_minus_2 = an_minus_1;
		an_minus_1 = an;
		an = an_minus_1 + an_minus_2;	
	}
	cout<< "The sum of even Fibonacci numbers less than " << max_N << " is : " << sum;
}
