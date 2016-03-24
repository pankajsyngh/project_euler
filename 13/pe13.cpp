#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <gmpxx.h>

using namespace std;


int main () {

	// Load the file and extract the numbers in a string //
	ifstream data_file("data");
	
	if (!data_file) {
    	cerr << "File data not found." << endl;
    	return -1;
  	}
	
	
	string line;
	mpz_class temp_number, sum;
	sum = 0;

	
	while (getline(data_file,line)){
		
		temp_number = line;
		sum = sum + temp_number;
	}

	data_file.close();
	
	cout << sum << '\n';
	

	return 0;
}
