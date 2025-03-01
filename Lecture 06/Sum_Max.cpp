#include<iostream>
#include<climits>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	int sum = 0;
	int maxi = INT_MIN;
	int mini = INT_MAX;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];

		if (maxi < a[i]) {
			maxi = a[i];
		}

		if (mini > a[i]) {
			mini = a[i];
		}
	}



	// for (int i = 0; i < n; i++) {
	// 	sum += a[i];

	// 	if (maxi < a[i]) {
	// 		maxi = a[i];
	// 	}

	// 	if (mini > a[i]) {
	// 		mini = a[i];
	// 	}
	// }

	cout << sum << endl;


}