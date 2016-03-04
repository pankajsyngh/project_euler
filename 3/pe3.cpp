#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int n, bool* prime)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
 
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
}


// Main function to obtain the highest prime factor of a given input number
int main()
{
    // Get the input on number //
	cout << "Enter the number (n) : \n";
	int n;
	cin >> n;	
	system("CLS");
	
	// initiate an array to store the location of prime numbers
    bool prime_arr[n+1];
    memset(prime_arr, true, sizeof(prime_arr));
    
    // getting location of all the prime numbers
    SieveOfEratosthenes(n, prime_arr);
    
    int max_prime_factor = 2;
    
    for (int p=2; p<= (int) n/2; p++){
       if (prime_arr[p]){
	   		if (n%p == 0){
	   			max_prime_factor = p;	
			}
	   }
    }
    
    cout << "largest prime factor of " << n << " is " << max_prime_factor;
	
    return 0;
}
