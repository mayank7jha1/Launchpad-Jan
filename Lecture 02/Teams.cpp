#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int x = 1, count = 0;
	int sum = 0;

	while (x <= n) {

		int p, v, t;
		cin >> p >> v >> t;

		sum = p + v + t;

		if (sum >= 2) {
			count = count + 1;
		}

		x = x + 1;
	}

	cout << count << endl;
}





