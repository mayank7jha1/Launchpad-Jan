#include<iostream>
using  namespace std;

/*
	Local Scope: Within the affinity of the functional block
	Globale Scope: For the entirity of the program.
*/

int x = 89;//This is a Global Variable that means I can
//access this variable through the program.



//The function only remain in memory till we are at line number 28.
void Solve() {
	int x = 19;

	/*
		This is a Local Variable to solve function.
		That means if the function call is over there will
		be no variable with the value 19 named as x.

	*/
}

int main() {
	int x = 10;//This is a local variable to main function.

	Solve();

	//Here I have only one x whose value is 10.

	cout << x << endl;
}