#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <gmpxx.h>

using namespace std;


int main () {

	int64_t max_number = 1000000;
	int64_t max_terms = 0;
	int64_t current, terms, starting_term;
	
	for (int64_t i = 2; i <= max_number; i++){
	
		terms = 1;
		current = i;
		while (current > 1){
		
			if((current%2) == 0){
			
				current = current/2;
			}
			
			else{
		
				current = 3*current + 1;	
			}
			terms++;
		}
		
		if(terms > max_terms){
		
			max_terms = terms;
			starting_term = i;
		}
	}
	cout << max_terms << " " << starting_term << endl; 
	return 0;
}
