#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <gmpxx.h>

using namespace std;


int main () {

	double phi;
	phi = 0.5*(1 + sqrt (5.0));
	
	int n = floor((999*log(10.0) + 0.5*log(5.0))/(log(phi)));
	
	cout << n+1 << endl;
		
}
