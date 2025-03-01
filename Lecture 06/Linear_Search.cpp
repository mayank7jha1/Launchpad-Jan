#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int key;
	cin >> key;

	int flag = 0;
	int i;

	for (i = 0; i < n; i++) {

		if (a[i] == key) {
			flag = 1;
			cout << "Yes" << endl;
			// return 0;
			break;
		}
	}

	if (i == n) {
		cout << "No" << endl;
	}

	// if (flag == 1) {
	// 	cout << "Yes" << endl;
	// } else {
	// 	cout << "No" << endl;
	// }


}












