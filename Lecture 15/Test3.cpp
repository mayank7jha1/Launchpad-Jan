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
	int suffix[n + 1] {0};
	suffix[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = suffix[i + 1] + a[i];
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

		if (mp[val] > 0 or (val + suffix[n - i - 1] == s)) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
}
