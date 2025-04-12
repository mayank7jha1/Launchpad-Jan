#include<iostream>
using  namespace std;
#include<map>
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


	map<int, int>mp;
	int lsum = 0;

	s = s / 2;

	for (int i = 0; i < n; i++) {
		lsum += a[i];
		int val = lsum - s;
		mp[a[i]]++;

		if (mp[val]) {
			cout << "YES" << endl;
			return 0;
		}
	}

	mp.clear();

	int rsum = 0;

	for (int i = n - 1; i >= 0; i--) {
		rsum += a[i];
		mp[a[i]]++;
		int val = rsum - s;

		if (mp[val] > 0) {
			cout << "YES" << endl;
			return 0;
		}
	}


	cout << "NO" << endl;
}