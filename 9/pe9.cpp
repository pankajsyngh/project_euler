#include <bits/stdc++.h>
#include <string>

using namespace std;

int main () {

	// The sum of the Pythagorean triplet //
	int S = 1000;
	int n = 0;
	int a, b, c;
	
	// The Pythagorean triplets are given by, a = m^2 - n^2, b = 2mn, c = m^2 + n^2
	
	for (int m = 1; m < sqrt(S/2); m++){
	
		n = S/2/m - m;
		
		if (m > n){
		
			a = pow(m,2) - pow(n,2);
			b = 2*m*n;
			c = pow(m,2) + pow(n,2);
			
			if (a + b + c == S){
				
				cout << a << " " << b << " " << c << " " << a+b+c << " " << a*b*c <<  endl;
			}
		}
	}
	
  return 0;
}
