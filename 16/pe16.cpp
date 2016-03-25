#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <gmpxx.h>

using namespace std;


int main () {

	mpz_class number = pow(2,1000);
	
//	cout << number << endl;
	
	mpz_class sum = 0;
	
	while (number != 0){
		
		sum = sum + (number%10);
		number = (number - (number%10))/10;
	}
	cout << sum << endl;
		
}


