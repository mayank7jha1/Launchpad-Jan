#include<iostream>
using namespace std;

void F(int i) {

	if (i == 5) {
		return;
	}

	static int x = 90;
	x++;
	cout << x << endl;

	F(i + 1);
	return;
}



int main() {

	F(0);

	// cout << x << endl;
	F(2);

	F(1);
}