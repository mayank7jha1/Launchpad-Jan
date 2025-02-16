#include<iostream>
using  namespace std;

int main() {


	// One way of writing comments single line comment

	/*
		Another way of writing comments multiline comment
	*/

	int a;//Variable Instantiation

	// int a; Not Allowed

	int b, c, d, e;

	// int f, float g;Not Allowed


	//Copy Assignment of a variable
	//Worst
	int h = 100; //Assignment Operator = which reads from right to left

	//Best
	int i{1999};//Direct List Initialisation.

	int j = {89898};//Copy List Initialisation

	// int k(98);

}