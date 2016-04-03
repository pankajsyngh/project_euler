#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <list>


using namespace std;

vector<string> read_file (){
	
	// open the file //
	ifstream in("names.txt");
	
	if (!in.is_open())
    {
        cerr << "Unable to open file" << "\n";
        exit(-1);
    }
    
    // separating string into individual names //
    vector<string> names;
    string token;    
    while (getline(in, token, ',')){
    
    	names.push_back(token);
    }
    return names;
}

int get_numeric_value(string name){

	int numeric_value = 0;
	
	for (int i : name){
		
		if (i > 64 && i <= 90){
		
			numeric_value += (i - 64);
		}
	}
	return numeric_value;	
}


int main () {
	
	// separating string into individual names //
	vector<string> names = read_file();
	
	// sort the array //
	sort(names.begin(), names.end());
	
	//
	int64_t sum = 0;
	for(int i = 0; i < names.size(); i++){
		
		sum += get_numeric_value(names[i])*(i + 1);
		cout<< i << " " << get_numeric_value(names[i])*(i + 1) << "\n";
	}
	
	cout << sum;
}
