#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
	int number_of_primes = 150;

	int* primes = new int[number_of_primes];
	int p = rand() % number_of_primes;
	int q = rand() % number_of_primes;
	int i = 3;
	int is_prime;
	int n = 0;
	while(n < 150){
		is_prime = 1;
		for(int j = 3;j <= i;j += 2){
			if (i%j == 0){
				is_prime = 0;
				break;
			}
		}
		if(is_prime == 1){
			primes[n] = i;
			n++;
		}
		cout << i++ << endl;
	}

	for (int j = 0;j < 150;j++){
		cout << primes[j] << endl;
	}
	return 0;
}