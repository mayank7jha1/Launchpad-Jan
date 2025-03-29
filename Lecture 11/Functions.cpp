#include<iostream>
using  namespace std;


void Solve(int p[]) {

	cout << *(p + 0) << endl;

	// []-->overloaded : Value of.
	cout << p[0] << endl;

	cout << *(p + 1) << endl;

	// for (int i = 0; i < 5; i++) {
	// 	cout << p[i] << " ";
	// }

	//*(8080 + 4) = 4;
	p[4] = 190;
}


int Length(char *ch) {


	int l = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		l++;
	}
	return l;
}


int main() {

	int a[] {3, 5, 6, 1, 7};

	cout << a + 1 << endl;

	Solve(a); //Arrays are by default pass by reference.

	cout << a[4] << endl;

	char ch[] {"Mayank"};

	cout << ch << endl;
	cout << Length(ch) << endl;
}