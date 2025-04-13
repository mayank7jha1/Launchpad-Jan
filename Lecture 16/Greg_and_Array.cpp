#include<iostream>
using  namespace std;
const int N = 1e5 + 10;

/*
	We have resolved the range 2 times or performed the
	update query 2 times.



*/

int main() {

	int n, m, k;
	cin >> n >> m >> k;

	int a[n + 1] {0};//1 Based Indexing

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int l[N], r[N], d[N];

	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	int Operation_Count[N] {0};

	while (k--) {

		/*
			Create the difference array for query
			i.e. konsa operation kitni bar karna hain
			yahi calculate karlo.
		*/

		int x, y;
		cin >> x >> y;

		Operation_Count[x] += 1;
		Operation_Count[y + 1] -= 1;
	}

	//Take Prefix of Operation Count
	for (int i = 1; i <= N; i++) {
		Operation_Count[i] = Operation_Count[i - 1] +
		                     Operation_Count[i];
	}


	// for (int i = 1; i <= m; i++) {
	// 	cout << Operation_Count[i] << " ";
	// }

	//Create the difference array for Original Array.

	int difference[N] {0};

	for (int i = 1; i <= n; i++) {

		int t = Operation_Count[i] * d[i];
		int o = l[i];
		int p = r[i];

		difference[o] += t;
		difference[p + 1] -= t;
	}

	for (int i = 1; i <= n; i++) {
		difference[i] = difference[i - 1] + difference[i];
	}
	// cout << endl;

	// for (int i = 1; i <= n; i++) {
	// 	cout << difference[i] << " ";
	// }

	for (int i = 1; i <= n; i++) {
		a[i] = a[i] + difference[i];
	}

	//cout << endl;

	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}


}