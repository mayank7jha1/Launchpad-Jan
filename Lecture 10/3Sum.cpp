#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;

	while (t > 0) {

		int n;
		cin >> n;

		int a[n];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int flag = 0;

		for (int i = 0; i < n - 2; i++) {

			for (int j = i + 1; j < n - 1; j++) {

				for (int k = j + 1; k < n; k++) {

					if (((a[i] + a[j] + a[k]) % 10) == 3) {//Computation

						cout << "YES" << endl;
						flag = 1;
						break;

					}

				}

				if (flag == 1) {
					break;
				}
			}

			if (flag == 1) {
				break;
			}
		}

		//As soon as I get a Yes I want to stand here.
		if (flag == 0) {
			cout << "NO" << endl;
		}


		t--;//For the next test case.
	}
}