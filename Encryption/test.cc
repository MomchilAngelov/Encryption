#include <iostream>
#include <math.h>
#include <sstream>
#include <unistd.h>

using namespace std;

int main(int argc, char** argv){
	int info = 25;
	int x,e,n;	
	if (argv[1]){
		cout << "argv[1] is here!" << endl;
		cout << argv[1] << endl;
	}
	if (argv[2]){	
		cout << "Argv[2] is here!" << endl;
		cout << argv[2] << endl;
	}

	return 0;
}