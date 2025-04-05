/*
	There can only be once occurance of one element.

	Q. Find the index of the element target given by the
	user in the array which is a monotonic increasing function.

	if the element is not present then just print
	the size of array as index in array
	can only range from 0 to size-1.
*/

#include<iostream>
using  namespace std;

int Binary_Search(int *a, int n, int target) {

	//Define the search space.
	int s = 0, e = n - 1;

	//Till you violate the search space do this:
	while (s <= e) {

		//Find the middle element;
		int mid = (s + e) / 2;

		//Remove the undesired space/division based on the
		//condition provided to you.

		if (a[mid] == target) {
			return mid;
		} else if (a[mid] > target) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return n;
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

	cout << Binary_Search(a, n, target) << endl;


}




