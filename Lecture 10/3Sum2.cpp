#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;

	while (t > 0) {

		int n;
		cin >> n;

		int a[n];
		int freq[10] {0};

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			a[i] = a[i] % 10;//To store the last digit only.
			int last_digit = a[i];
			freq[last_digit] += 1;
		}

		for (int i = 0; i < 10; i++) {
			if (freq[i] > 3) {
				freq[i] = 3;
			}
		}


		int b[30];//Mere digits ko store karega.
		int m = 0;//This will tell me for the current test case mera
		//digits array ka size kitna hain which can be less than
		//or equal to 30.


		for (int i = 0; i < 10; i++) {

			int ce = i;
			int f = freq[i];//f store how many times i as a digit occurs i.e the frequency of i.

			while (f > 0) {

				b[m] = ce;
				m++;//Since I want next ce should come at the new index hence
				//k++.


				f--;//After adding the ce in b array one time remove one frequency.
			}
		}

		int flag = 0;

		for (int i = 0; i < m - 2; i++) {

			for (int j = i + 1; j <  m - 1; j++) {

				for (int k = j + 1; k < m; k++) {

					if (((b[i] + b[j] + b[k]) % 10) == 3) {//Computation
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

		if (flag == 0) {
			cout << "NO" << endl;
		}

		t--;//For the next test case.
	}
}