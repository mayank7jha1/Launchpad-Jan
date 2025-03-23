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

	for (int i = 0; i < n - 2; i++) {

		/*
			Current element(or the first element of the pair)
			is a[i] and you are trying to find  the second
			element of the pair in second loop and third element
			in  third loop.
		*/
		for (int j = i + 1; j < n - 1; j++) {

			for (int k = j + 1; k < n; k++) {

				if (a[i] + a[j] + a[k] == target) {
					cout << a[i] << " " << a[j] << " " << a[k] << endl;
				}
			}
		}
	}
}