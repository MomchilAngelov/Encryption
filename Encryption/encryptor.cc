#include <sstream>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <math.h>
#include <fstream>
//Use pipe function in C for interprocess comunication!
//Pipe in linux DOES NOT WORK!
using namespace std;

bool exists_test1 (const string& name) {
	if (FILE *file = fopen(name.c_str(), "r")) {
		fclose(file);
		return true;
	} else {
		return false;
	}  
}

int main(int argc, char** argv){
	int number_of_primes = 150;
	int q,p,f_of_n,d;
	int* primes = new int[number_of_primes];
	int pi = rand() % number_of_primes/15;
	int qi = rand() % number_of_primes/15;
	int e = 3;
	int i = 3;
	int is_prime;
	int n = 0;
	while(n < 150){
		for(int j = 3;j <= i;j ++){
			if (i%j == 0){
				if (i == j){
					is_prime = 1;
				} else {
					is_prime = 0;
				}
				break;
			}
		}

		if(is_prime == 1){
			primes[n] = i;
			n++;
		}
		i++;
	}

	q = primes[qi];
	p = primes[pi];
	n = p*q;
	f_of_n = (q-1) * (p-1);
	d = ((2*f_of_n)+1)/e;

	if (argv[1]){
		cout << argv[1] << endl;
		istringstream ss(argv[1]);
		int x;
		if(!(ss >>x))
			cerr << "Invalid number " << argv[1] << endl;
		
		int c = x;
		double tmp = pow(c,d);
		cout << "Your number was: " << (int)tmp%n << endl;
	} else {
		cout << n << endl;
		cout << e << endl;
	}

	return 0;
}	