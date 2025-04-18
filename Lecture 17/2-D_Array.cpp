/*
	array of array
	array of vector
	vector of vector
*/

#include<iostream>
using  namespace std;

/*
	Kisi bhi container/data type ko/function
	ko multiple element dene hain
	toh you can use {}.
*/

int main() {

	/*

		int a[] {1, 2, 3, 4, 5};
		int b[3][3] {{1, 2, 4}, {1, 5, 7}, {9, 4, 1}};
		int c[][3] {{1}, {1, 5, 7}, {9, 4}};

		int n, m;
		cin >> n >> m;
		int d[n][m];
		int e[][5] {{0}, {0}, {0}};
		int f[4][5] {{0}};
		int g[4][5] {{}};

	*/

	int n, m;
	cin >> n >> m;
	int a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;









}












