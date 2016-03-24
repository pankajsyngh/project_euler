#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <gmpxx.h>

using namespace std;


int main () {

	int N = 20;
	double fact = 1;
	int64_t var;
	
	for (int i = 0; i < N; i++){
	
		fact = fact*(2*N - i);
		fact = fact/(N - i);
	}
	var = fact;
	cout << var << endl;
}
