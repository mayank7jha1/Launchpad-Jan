#include<iostream>
using  namespace std;

/*
else
and if else ladder
*/

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	if ((a > b) and (a > c)) {
		cout << a << endl;
	} else if (b > a and b > c) {
		cout << b << endl;
	} else {
		cout << c << endl;
	}


	/*
		if ((a > b) and (a > c)) {
			cout << a << endl;
		}
		if ((b > a) and (b > c)) {
			cout << b << endl;
		}
		if ((c > a) and (c > b)) {
			cout << c << endl;
		}

		if ((a > b) and (a > c)) {
			cout << a << endl;
		}
		if (b > a and b > c) {
			cout << b << endl;
		} else {
			cout << c << endl;
		}

	*/
}