#include <iostream>
#include <math.h>
#include <sstream>
#include <unistd.h>

using namespace std;

int main(int argc, char** argv){
	int info = 25;
	int x,e,n;
	if (argv[1]){
		istringstream ss(argv[1]);
		if(!(ss >> x))
			cerr << "Invalid number " << argv[1] << endl;
		n = x;
	}
	if (argv[2]){	
		istringstream ss1(argv[2]);
		if(!(ss1 >> x))
			cerr << "Invalid number " << argv[2] << endl;
		e = x;
	}

	double tmp = pow(info,e);
	int c = ((int)tmp % n);
	cout << c << endl;
	return 0;
}