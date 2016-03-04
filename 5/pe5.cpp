#include <bits/stdc++.h>
using namespace std;
 
vector<int> SieveOfEratosthenes(int n)
{
    // Create an array of prime number below than than the input integer n //
    
    
    // initiate a Boolean array to store the location of primes on the number line //
    bool prime[n+1];
    
    // assigning the values to the elements of the array //
    memset(prime, true, sizeof(prime)); 
 	
 	// initiating an array to store the value of primes //
 	vector<int> primes;		
 	
 	// looping over to mark the primes //
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    
	
	// Assigning all the prime number to an array //    
 	int c = 0;
    for (int p=2; p<=n; p++){
    	if (prime[p]){
       		primes.push_back(c);
        	primes[c] = p;
        	c = c + 1;
       }
	}
	return primes;
}
 


// Program to obtain the smallest number which is a multiple of all the numbers below a given number n //
int main(){

	
	// input the maximum number below which you want to find the smallest multiple //
    int n = 20;
    
    
    // obtain the list of all prime numbers below number n //
    vector<int> primes;
    primes = SieveOfEratosthenes(n);
    
    
    // intiate the information storage for the maximum power of each prime in each of the numbers below n //
    int num_of_primes = primes.size();
    int highest_pow[num_of_primes] ;
    memset(highest_pow, 0, sizeof(highest_pow)); 
    
    
    // looping over all the numbers below n to get their prime decomposition //
    for(int i=2; i<=n; i++){
    
    	int num = i;
    	int temp_array [num_of_primes];
    	memset(temp_array, 0, sizeof(temp_array)); 
    	 
    	// iterating over the prime numbers // 
    	for(int j=0; j<num_of_primes; j++){
    		
    		if( num%primes[j]==0 ){
    		
//	    		cout << num << " " << primes[j] << " ";
    			num = num/primes[j];
    			temp_array[j]++;
//    			cout << num << "\n";
    			j = -1;
    		}
    	}
    	
    	// checking for the highest power of prime numbers//
    	for(int k=0; k<num_of_primes; k++){
    		
    		if (highest_pow[k] < temp_array[k]){
    		
    			highest_pow[k] = temp_array[k];
    		}
    	}
//    	cout << "\n";
    }
    
    // generate the smallest multiple //
    int smallest_multiple = 1;
    
    for(int k=0; k<num_of_primes; k++){
    	
//    	cout << primes[k] << " " << highest_pow[k] << " " << pow(primes[k],highest_pow[k]) << "\n";
		smallest_multiple = smallest_multiple * pow(primes[k],highest_pow[k]);
    }
	
	cout << smallest_multiple << "\n";    

    
    
}
