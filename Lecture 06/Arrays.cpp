#include<iostream>
using  namespace std;


int main() {

	int x;//Variable Definition
	int y = 10;//Variable Initialisation

	int z{97};//Direct List Initialistion
	int q = {12};//Copy List Initialisation

	/*
		You have defined an array of block 10
		where each  block is of int type.
		Size: 40 bytes
	*/

	int a[10];//Array Definition

	/*
		You have created an array of 5 blocks
		where each block is of int type
		and the block contains value of 1
		second as 2,third as 3,fourth as 4 and
		fifth as 5.
	*/

	int b[5] {1, 2, 3, 4, 5}; //Array Definition and Initialistion

	cout << b + 0 << endl;
	cout << b + 2 << endl;
	cout << *(b + 1) << endl;
	cout << b[1] << endl;

	/*
		[]: This is overloaded and
			this also gives you value of the
			jump/index.
	*/


	int c[5] {};//This allows you to initialise every block
	// with zero.

	int d[5] {3, 1};

	// int e[];This is not allowed.

	// int f[2] {3, 4, 5};//This will result in  error.

	int g[] {1, 2, 3};


	int h[5] {1, 5, 7, 2, 9};

	// int h[40];//THis is  an error.

	//h[40];//*(h+40): This will not give an error.

	// h[23] = 78;

	// cout << h[23] << endl;



}