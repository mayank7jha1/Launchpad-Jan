/*
	Q. Find the index of the element target given by the
	user in the array.

	if the element is not present then just print
	the size of array as index in array
	can only range from 0 to size-1.
*/

#include<iostream>
using  namespace std;

int Linear_Search(int *a, int n, int target) {

	int ans = n;

	for (int i = 0; i < n; i++) {
		if (a[i] == target) {
			ans = i;
			break;
		}
	}

	return ans;
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	cout << Linear_Search(a, n, target) << endl;
}




