#include<iostream>
using  namespace std;

int main() {

	// //Initialisation using copy assignment of a integer variable.
	// int x = 10;

	// int y{89};//Direct List Initialisation. (This is fastest form of initialisaton)

	// float z = 98.7;


	// //Narrow Conversion of the data doesn't happen in direct list initialisation.

	// int f{87.99};
	// // cin >> f;

	// cout << f << endl;


	// Type Casting:

	/*
		Implict Type Casting.
		Explict Type Casting.
	*/


	// float m = 10.7;

	// //Implict
	// int ans = m;
	// cout << ans << endl;

	// //Explict
	// cout << (int)m << endl;
	// cout << m << endl;



	int x = 100;

	int y = 7;


	cout << (float)(x / y) << endl;
	cout << ((float)x / y) << endl;
	cout << (x / (float)y) << endl;

	cout << (x / 7.0) << endl;


}