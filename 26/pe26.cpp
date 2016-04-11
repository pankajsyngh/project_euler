#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <list>


using namespace std;



// upper limit for checking repeating pattern //
int m = 1000;


// get the largest repeating pattern //
int get_largest_cycle(int n){
	
	int remainders[n];
	memset(remainders, 0, sizeof(remainders));
	
	int largest_length = 0;
	
	int number = 1;
	int position = 0;
	
	while (number != 0 && remainders[number] == 0){
	
		remainders[number] = position;
		number *= 10;
		number %= n;
		position++;
	}
	
	if (position - remainders[number] > largest_length){
		
		if (number == 0){
			largest_length = 0;
		}
		else{
			largest_length = position - remainders[number];
		}
	}
	return largest_length;
}


// Main function //

int main () {
	
	// variable for the denominator //
	int n = m+1;
	
	// looping over the numbers to check the size of the repeating cycle //
	int largest_cycle = 0;
	
	// checking for the longest repeating cycle //
	while(n > largest_cycle){
		n--;
		
		if(largest_cycle < get_largest_cycle(n)){
		
			largest_cycle = get_largest_cycle(n);
		}
	}
	
	cout << largest_cycle <<"\n";
}
