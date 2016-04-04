#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <list>


using namespace std;

// maximum number of factors //
int m = 10000;

// get the sum of divisors //
int64_t get_sum_divisors(int n){
	
	vector<int> divisors;
	int counter = 0;
	
	// looping over the numbers less than square root of n to find factors // 
	for (int i = 2; i < sqrt(n); i++){
		if(n%i == 0){
			divisors.push_back(i);
			divisors.push_back(n/i);
			counter += 2;
		}
	}
	
	// summing up the divisors //
	int64_t sum = 1;
	for (int i = 0; i < counter; i++){
		sum += divisors[i];	
	}
	
	return sum;
	
}


// check if a number is amicable //
int check_amicable(int n){

	int64_t var1, var2;
	
	var1 = get_sum_divisors(n);
	var2 = get_sum_divisors(var1);
	
	// checking if the numbers are amicable //	
	int check = 0;
	
	if (var2 == n && var1 != n){
		check = 1;
	}
	
	return check;	
}

// Main function //

int main () {
	
	// starting triangle number //
	int n;
	
	
	// looping over the numbers to check if they are amicable //
	int64_t sum = 0;
	
	for (n = 2; n < m; n++){
		if(check_amicable(n) == 1){
			sum += n;
		}
	}
	cout << sum << "\n";
}
