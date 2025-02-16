#include<iostream>
using  namespace std;

int main() {
	int n, m, t, w, th, f, sa, s;
	cin >> n;
	cin >> m >> t >> w >> th >> f >> sa >> s;

	int cd = m;
	int count = 1;

	int sum = m + t + w + th + f + sa + s;
	n = n % sum;

	if (n == 0) {
		cout << 7 << endl;
		return 0;
	}


	while (n >= 0) {

		count = count + 1;

		if (count == 1) {
			n = n - m;
		} else if (count == 2) {
			n = n - t;
		} else if (count == 3) {
			n = n - w;
		} else if (count == 4) {
			n = n - th;
		} else if (count == 5) {
			n = n - f;
		} else if (count == 6) {
			n = n - sa;
		} else {
			n = n - s;
		}
	}




	cout << count << endl;

}