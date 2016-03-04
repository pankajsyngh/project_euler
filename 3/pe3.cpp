#include <bits/stdc++.h>
using namespace std;

// Main function to obtain the highest prime factor of a given input number
int main(){

	// Get the input on number //
	cout << "Enter the number (n) : \n";
	int64_t n;
	cin >> n;

	// initiating the variables //
	int64_t max_prime_factor = 2;
	int64_t updated_n = n;
		
	// looping over to find the largest prime factor //
	for (int64_t p=2; p<=(int64_t) n/2; p++){
		
		cout << p << "\n";
		if (updated_n%p==0){
			updated_n = updated_n/p;
			max_prime_factor = p;
		//	cout << updated_n << " " << max_prime_factor << "\n";
			p = 2;
		}
		
		if (updated_n < max_prime_factor){
			break;
		}
	}
	cout << "largest prime factor of " << n << " is " << max_prime_factor << "\n";
	return 0;
}
