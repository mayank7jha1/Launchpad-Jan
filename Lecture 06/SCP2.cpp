#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int x[n], y[n];

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	int SCP = 0;

	for (int i = 0; i < n; i++) {

		int l = 0, r = 0, u = 0, d = 0;

		for (int j = 0; j < n; j++) {

			if (x[j] > x[i] and y[j] == y[i]) {
				r = 1;
			}

			if (x[j] < x[i] and y[j] == y[i]) {
				l = 1;
			}

			if (x[j] == x[i] and y[j] > y[i]) {
				u = 1;
			}

			if (x[j] == x[i] and y[j] < y[i]) {
				d = 1;
			}
		}


		if (l == 1 and r == 1 and d == 1 and u == 1) {
			SCP++;
		}
	}

	cout << SCP << endl;

}