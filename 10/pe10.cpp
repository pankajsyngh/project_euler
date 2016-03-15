#include <bits/stdc++.h>


using namespace std;

int check_prime(vector<int64_t> primes_before, int64_t number){

	// checking for prime numbers, by dividing the current number with the pre-existing primes //
	int check = 1;
	
	// loop to check the divisibility of the given number by the previous primes //
	for (int i = 0; primes_before[i] <= sqrt(number); i++){
	
		if (number%primes_before[i] == 0){
			check = 0;
			return check;
			break;
		}
	}
	return check;
}


int64_t get_next_prime(vector<int64_t> primes_before){

	// searching for the next prime number to append to the current list of primes //
	int64_t last_prime = primes_before[primes_before.size() - 1];
	int check = 0;
	int64_t number = last_prime + 1;
	
	// looping over the numbers, starting from the largest prime in the list and incrementing //
	while (check == 0){
		
		int var = 0;
		int check = check_prime(primes_before, number);
		
		if (check == 1){
		
			return number;
			break;
		}
		
		else{
		
			number = number + 1;
		}
	}
	return number;
}


// Program to obtain the smallest number which is a multiple of all the numbers below a given number n //
int main(){
	
	// input the maximum number below which you want to find the smallest multiple //
	int64_t max_prime = 2000000;
	
	// initiating a vector to store the prime numbers
	vector<int64_t> primes;
	int64_t next_prime = 0;
	
	// push the first number in the stack
	primes.push_back(0);
	primes[0] = 2;
	
	// running the loop to check the primes and storing them //
	int64_t counter = 1;
	int64_t sum = primes[0];
	
	while (next_prime < max_prime){
		next_prime = get_next_prime(primes);
		sum = sum + next_prime;
		cout << next_prime << " " << sum << endl;
		primes.push_back(counter);
		primes[counter] = next_prime;
		counter++;
	}
	sum = sum - next_prime;
	cout << sum << endl;
}
