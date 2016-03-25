#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <list>
#include <boost/array.hpp>

using namespace std;

int main () {

	typedef list<int64_t> data;

	// get the number of lines in the file //
	ifstream temp_file("data");
	int n = count(istreambuf_iterator<char>(temp_file), istreambuf_iterator<char>(), '\n');
	temp_file.close();
	 
	// reading the file and storing it in an array//
	ifstream in;
	in.open("data");
	int arr[n][n];
	memset(arr,0,sizeof(arr));
		
	for (int i = 0; i < n; i++){
		
		for(int j = 0; j < i+1; j++){
			
			in >> arr[i][j];
		}
	}
	
	// start from bottom to get the max sum //
	
	for (int i = n-2; i >= 0; i--){
	
		for (int j = 0; j <= i; j++){
		
			arr[i][j] = max((arr[i][j] + arr[i + 1][j]), (arr[i][j] + arr[i + 1][j+1]));
		}
	}
	
	cout << arr[0][0] << endl;
}
