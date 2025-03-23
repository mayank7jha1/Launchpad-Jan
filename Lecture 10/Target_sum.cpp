#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target;
	cin >> target;

	for (int i = 0; i < n - 1; i++) {

		/*
			Current element(or the first element of the pair)
			is a[i] and you are trying to find  the second
			element of the pair.
		*/
		for (int j = i + 1; j < n; j++) {

			if (a[i] + a[j] == target) {
				cout << a[i] << " " << a[j] << endl;
			}
		}
	}
}