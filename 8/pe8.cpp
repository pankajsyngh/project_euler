#include <bits/stdc++.h>
#include <string>

using namespace std;

int64_t get_product (int* arr, int l){

	int64_t product = 1;
	
	for (int i = 0; i < l; i++){
	
		product = product*arr[i];
	}
	
	return product;
}

int if_zeroes (int* arr, int l){
	
	int check = 1;
	for (int i = 0; i < l; i++){
	
		if(arr[i] == 0){
		
			check = 0; 
			break;
		}
	}
	return check;	
}

int main () {

	// Load the file and extract the numbers in a string //
	ifstream data_file; 
	data_file.open ("data");
	string line;
	getline(data_file, line);
	data_file.close();
	
  	// convert the string to array //
	vector<char> char_arr(line.begin(), line.end());
//	cout << line << endl;

  	// convert the character array to an integer array //
  	int numbers[char_arr.size()];
  
	for(int i=0; i < char_arr.size(); i++){

		numbers[i] = int(char_arr[i] - '0');
	}
	
	// looping over the numbers array to find the maximum product //
	int l = 13;
	int64_t product = 1;
	int64_t max_product = 0;
	int temp_array[l];
	int check = 0;
	
	for (int i=0; i+l<=char_arr.size(); i++){
		
		for (int j=i; j-i<l; j++){
		
			temp_array[j-i] = numbers[j];
		}
		
		check = 0;
		check = if_zeroes(temp_array, l);
		
		if (check == 1){
		
			product = get_product(temp_array, l);
//			cout << product << " " << check << " " << i << endl;
		
			if (product > max_product){
			
				max_product = product;
			}
		}
		
		else{
		
			i = i + l - 1;
		}
	}
	
	cout << max_product << endl;
	
  return 0;
}
