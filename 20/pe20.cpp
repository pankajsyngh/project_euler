#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <list>
#include <boost/array.hpp>
#include <ctime>

using namespace std;

int main () {
	
	// the number for which factorial is to be calculated //
	int n = 100;

	// Initiating an array to store the dec representation of a large factorial //
	vector<int64_t> dec_notation;
	
	// initiating the decimal notation by pluggin in the first nunber which is 1 //
	dec_notation.push_back(0);
	dec_notation[0] = 1;
	
	// initiating temp variables to store the data during the process //
	int temp1 = 0;
	int temp2 = 0;
	
	for (int i = 2; i <= n; i++){
		
		temp1 = 0; 
		temp2 = 0;
		
		for (int j = 0; j<dec_notation.size(); j++){

			temp2 = temp1;
			temp1 = (dec_notation[j]*i + temp2)/10; 
			dec_notation[j] = (dec_notation[j]*i + temp2)%10;
		}
		
		if (temp1 != 0){
		
			while (temp1 != 0){
					dec_notation.push_back(dec_notation.size() + 1);
					dec_notation[dec_notation.size() - 1] = temp1%10;
					temp1 = temp1/10;				
			}
		}
	}
	
	int sum = 0;
	for (int i = 0; i < dec_notation.size(); i++){
	
		sum += dec_notation[i];
//		cout << dec_notation[i] << " ";
	}
	
	cout << sum << "\n";
}
