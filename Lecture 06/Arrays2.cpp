#include<iostream>
using  namespace std;

int main() {

	int a[5] {3, 7, 1, 2, 13}

	cout << a[0] << endl;//*(a+0)
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;

	//Traversal.
	int i = 0;

	while (i <= 5) {
		cout << a[i] << " ";
		i++;
	}

	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}


}