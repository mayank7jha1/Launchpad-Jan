#include<iostream>
using  namespace std;
#define int long long


int32_t main() {

	int n;
	cin >> n;

	int a[n];
	int s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
	}

	if (s % 2 == 1) {
		cout << "NO" << endl;
		return 0;
	}

	//I am Calculating lsum.
	//I am preassuming elements can only go upto 10^5.
	int freq[100003] {0};
	int lsum = 0;

	s = s / 2;

	for (int i = 0; i < n; i++) {
		lsum += a[i];
		int val = lsum - s;
		freq[a[i]]++;

		if (val > 0 and freq[val] > 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	for (int i = 0; i < 100003; i++) {
		freq[i] = 0;
	}

	int rsum = 0;

	for (int i = n - 1; i >= 0; i--) {
		rsum += a[i];
		freq[a[i]]++;
		int val = rsum - s;

		if (val > 0 and freq[val] > 0) {
			cout << "YES" << endl;
			return 0;
		}
	}


	cout << "NO" << endl;
}