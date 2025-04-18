#include<iostream>
using  namespace std;

void Solve(int a[5][4]) {
	int n = 5;
	int m = 4;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

}

// const int n = 5;
// const int m = 4;

// void Solve1(int a[n][m]) {
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;
// 	}

// 	cout << endl;

// }

// void Solve2(int a[][m]) {
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;
// 	}

// 	cout << endl;
// }


// void Solve3(int (*a)[m]) {
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;
// 	}

// 	cout << endl;
// }

void Solve4(int **a, int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
}


int main() {
	int n, m = 4;
	cin >> n >> m;
	int a[n][m];


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	Solve4(a, n, m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}