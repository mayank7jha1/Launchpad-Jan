#include<iostream>
#include<climits>
using  namespace std;

/*
	Given an array of size n, print the maximum
	subarray sum of length k where k can be in range [1,n-1];

*/

/*
	Computation in Basic: n^2

*/
int Basic_Approach(int *a, int n, int k) {

	int max_sum = INT_MIN;

	for (int i = 0; i <= n - k; i++) {
		int sum = 0;

		for (int j = i; j < i + k; j++) {
			sum += a[j];
		}

		max_sum = max(max_sum, sum);
	}

	return max_sum;
}


int Optimised_Approach(int *a, int n, int k) {

	int max_sum = INT_MIN;
	int start = 0;
	int count = 0;
	int sum = 0;
	// cout << k << endl;

	for (int end = 0; end < n; end++) {
		sum += a[end];//Expansion  till you can
		count++;

		//shrink if the condition violates
		while (start <= end and count > k) {
			//cout << sum << endl;
			sum -= a[start];
			start++;
			count--;
		}

		max_sum = max(sum, max_sum);
	}

	return max_sum;
}



int main() {
	int n, k;
	cin >> n >> k;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Basic_Approach(a, n, k) << endl;
	cout << Optimised_Approach(a, n, k) << endl;
}