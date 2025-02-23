#include<iostream>
using  namespace std;

int main() {
	int x = 15;
	int *xptr = &x;
	int **xxptr = &xptr;
	int ***xxxptr = &xxptr;


	cout << x << endl;
	cout << &x << endl;
	cout << *(&x) << endl;
	//cout << &(*x) << endl;Not Correct
	cout << xptr << endl;
	cout << &xptr << endl;
	cout << *(&xptr) << endl;
	cout << &(*xptr) << endl;
	cout << &xxptr << endl;
	cout << *xxptr << endl;
	cout << &xxxptr << endl;
	cout << *xxxptr << endl;
	cout << *(&xxxptr) << endl;
	//cout << &(&xptr) << endl;Not Correct
	cout << *xptr << endl;


}