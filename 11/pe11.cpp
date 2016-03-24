#include <bits/stdc++.h>
#include <string>


using namespace std;


int main (){

	// Load the file and extract the numbers in a string //
	ifstream in;
	in.open("data");
	int arr[20][20];
	for(int i = 0;i < 20;++i)
	{
		for(int o = 0;o < 20;o++){
		
			in >> arr[i][o];
		}
	}
	
	
	// Iterating over the matrix to find the maximum product //
	int64_t max_product = 0;
	int64_t product = 0;
	
	// iterating for product in vertical direction //
	for (int i = 0; i < (20-4); i++){
	
		for (int j = 0; j < 20; j++){
		
			product = arr[i][j]*arr[i + 1][j]*arr[i + 2][j]*arr[i + 3][j];
			if (product > max_product){
			
				max_product	= product;
			}
		}
	}
	cout << max_product << endl;	
	
	// iterating for product in horizontal direction //
	for (int j = 0; j < (20-4); j++){
	
		for (int i = 0; i < 20; i++){
		
			product = arr[i][j]*arr[i][j + 1]*arr[i][j + 2]*arr[i][j + 3];
			if (product > max_product){
			
				max_product	= product;
			}
		}
	}
	cout << max_product << endl;
	
	// iterating for product in diagonal direction left to right downwards//
	for (int j = 0; j < (20-4); j++){
	
		for (int i = 0; i < (20 - 4); i++){
		
			product = arr[i][j]*arr[i + 1][j + 1]*arr[i + 2][j + 2]*arr[i + 3][j + 3];
			if (product > max_product){
			
				max_product	= product;
			}
		}
	}
	cout << max_product << endl;
	
	// iterating for product in diagonal direction right to left downwards//
	for (int i = 0; i < (20 - 4); i++){
	
		for (int j = 3; j < 20; j++){
		
			product = arr[i][j]*arr[i + 1][j - 1]*arr[i + 2][j - 2]*arr[i + 3][j - 3];
			if (product > max_product){
			
				max_product	= product;
			}
		}
	}
	cout << max_product << endl;
}
