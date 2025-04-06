#include<iostream>
using  namespace std;
#define int long long

int32_t main() {
	int n, m;
	cin >> n >> m;
	int ans = 0;

	if (n <= m) {
		cout << n << endl;
		return 0;
	} else {
		//n>m

		int s = 0;
		int e = 1e10;


		while (s <= e) {
			int mid = (s + e) / 2;
			cout << mid << endl;
			int Part1 = (mid * (mid + 1)) / 2;
			int Value = n - m;

			if (Part1 >= Value) {
				ans = mid;
				e = mid - 1;
			} else {
				s = mid + 1;
			}
		}
	}

	cout << m + ans << endl;
}









