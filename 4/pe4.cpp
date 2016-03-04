#include <bits/stdc++.h>
using namespace std;

// This function retruns a 6 digit palindrome number provided first three digits
int generate_palindrome(int n){

	int c = n%10;
	int b = ((int) n/10)%10;
	int a = ((int) n/100)%10;
	
	int	palindrome_number = a*100000 + b*10000 + c*1000 + c*100 + b*10 + a;
	
	return palindrome_number;	
}


// This function factorizes a 6 digit palindrome number into product of two numbers, one of them which is a 3-digit number
void get_factors(int n, int* arr){

	int var1, var2;
	var1 = 1;
	var2 = 1;

	for (int i = 999; i > 316; i--){
	
		if (n%i == 0){
			var1 = i;
			var2 = n/i;
			break;
		}
	}
	
	arr[0] = var1;
	arr[1] = var2;
}


// Main function to obtain the largest palindrome number which is a product of two 3 digit numbers
int main(){


	// get the largest possible number which is a product of two 3 digit numbers //
	int max_N = 999*999;
	

	// get the starting index of the palindrome //
	int max_index = max_N/1000;
	
	
	// initiating the variables for storing palindrome numbers and factors
	int palindrome;
	int factor_arr[2] = {};

	
	// looping down the max_index to generate palindromes and finding the factors//
	for (int i = max_index - 1; i >= 100; i--){
		
		palindrome = generate_palindrome(i);
		cout << palindrome << "\n";
		
		factor_arr[0] = 1; 
		factor_arr[1] = 1;
		
		get_factors(palindrome, factor_arr);
		
		cout << factor_arr[0] << " " << factor_arr[1] << "\n";	
		
		// Checking if the two factors are three digit numbers
		if (factor_arr[1] > 100 && factor_arr[0] > 100 && factor_arr[1] < 999 && factor_arr[0] < 999){
			break;
		}
	}
}
