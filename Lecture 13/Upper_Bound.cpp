/*
	Q. Find the First index containing the element
	which is greater than  to the target.

	If No such element exists then just print the
	size of the array.
*/

#include<iostream>
using  namespace std;

int Upper_Bound(int *a, int n, int target) {
	int s = 0, e = n - 1;
	int ans = n;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] > target) {
			//This mid is my potential answer store this
			//valuee and look for a better answer.
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
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

	cout << Upper_Bound(a, n, target) << endl;


}




