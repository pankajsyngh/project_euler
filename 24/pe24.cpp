#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <gmpxx.h>

using namespace std;

int64_t factorial(int n){

	int64_t fact = 1;
	
	for (int i = 1; i<=n; i++){
	
		fact = fact*i;
	}
	
	return fact;
}


int main () {

	vector<int> arr(8);
	int64_t var, sum;
	int j;
	sum = 0;
	
	for (int i = 0; i < 8; i++){
	
		var = factorial(9-i);
		j = 1;
	
		while (j*var + sum <= 1000000){
		
			j++;
		}
		
		arr[i] = j - 1;
		sum = sum + var*arr[i];
		
		cout << arr[i] << endl;
	}
}
