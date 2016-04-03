#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <list>


using namespace std;

// start generating the triangle numbers //
vector<int> primes;
vector<int> powers;
int length;

void update_powers(int n){
	
	int c = 0;
	
	while (n > 1){
		
		if (n%primes[c] == 0){
			
			n = n/primes[c];
			powers[c] += 1;
			c = 0;
		}
		else {
		
			c += 1;
		}
		
		if ((c + 1) > length){
		
			primes.push_back(n);
			powers.push_back(1);
			length += 1;
			break;
		}
	}
}

int get_factors(int n){

	if (n == 1){
	
		return 1;
	}
	
	else {
	
		update_powers(n);
		update_powers(n+1);
		powers[0] -= 1;
//		for (int i = 0; i < 2; i++){
//			cout << powers[i] << " ";
//		}
	}
	
	int factors = 1;
	for (int i = 0; i < length; i++){
	
		factors *= (powers[i] + 1);
	}
	
	return factors;

}



int main () {
	
	// starting triangle number //
	int n = 1;
	
	// maximum number of factors //
	int m = 500;
	
	// start generating the triangle numbers //
	int factors = 0;
	
	// initiating the primes array //
	primes.push_back(2);
	length += 1;
	powers.push_back(0);
	
	
	while (factors < m){
		
		factors = get_factors(n);	
		for (int i = 0; i < length; i ++){
			powers[i] = 0;
		}	
		cout << factors << " " << ((n*(n+1))/2) <<"\n";
		n += 1;
	}
}
