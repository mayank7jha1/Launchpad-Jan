#include<iostream>
using namespace std;

/*
	Whenever we want to make a variable/function/object etc. constant
	in a scope we use const keyword.

	constant variables will always be intialised
	at the time of its definition.

*/

// global scope me constant:
const int N = 100;


int main() {

	//N++;//Same Error.

	int N = 90;//This is allowed because you are creating a new variable.

	const int x = 10;
	//x++;//This is not allowed.


	if (true) {
		int x = 90;//This is allowed because different scope.
		x++;
	}

	//Static


}













