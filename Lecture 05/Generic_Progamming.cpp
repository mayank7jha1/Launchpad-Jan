#include<iostream>
using  namespace std;

//Generic Programming
//Function Overloading
//When the number of arguments are different
//When the type of those arguments are different

//Default Arguments

//Templates

// int sum(int a, int b) {
// 	return (a + b);
// }
// double sum(int a, double b) {
// 	return a + b;
// }
// int sum(int a, int b, int c) {
// 	return a + b + c;
// }

// int sum(int a, int b, int c, int d) {
// 	return a + b + c + d;
// }

// template<typename T>

double sum(double a = 0, double b = 0, double c = 0, double d = 0, double e = 0.0) {
	return a + b + c + d + e;
}


int main() {
	int a = 10, b = 78, c = 89, d = 45;
	double e = 87.9;
	cout << sum(a, b);
	cout << endl << sum(a, b, c) << endl;
	cout << sum(a, b, c, d) << endl;

	cout << sum(a, 3.30) << endl;


}