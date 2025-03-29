#include<iostream>
using  namespace std;


int Books(int *a, int n, int tt) {

	int max_book = 0;

	for (int i = 0; i < n; i++) {
		int tc = 0;
		int current = 0;

		for (int j = i; j < n; j++) {
			tc += a[j];
			if (tc > tt) {
				break;
			}

			current++;
		}
		max_book = max(max_book, current);

	}

	return max_book;
}


int main() {
	int n, t;
	cin >> n >> t;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Books(a, n, t) << endl;
}