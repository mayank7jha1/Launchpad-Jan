#include<iostream>
#include<climits>
using  namespace std;

int Books(int *a, int n, int tt) {

	int mx = 0;
	int start = 0;
	int tc = 0;

	for (int end = 0; end < n; end++) {

		//Expansion  till you can
		tc += a[end];

		//Shrink if the condition violates
		while (start <= end and tt < tc) {
			tc -= a[start];
			start++;
		}

		mx = max(end - start + 1, mx);
	}

	n++;
	cout << n << endl;
	return mx;
}



int main() {
	int n, tt;
	cin >> n >> tt;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << Books(a, n, tt) << endl;
	cout << n << endl;
}