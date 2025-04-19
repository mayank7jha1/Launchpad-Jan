#include<iostream>
#include<algorithm>
#include<string>
using  namespace std;

int Noise(string &s) {
	int ans = 0, sc = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 's') {
			sc++;
		} else {
			ans += sc;
		}
	}
	return ans;
}

bool compare(string &a, string &b) {

	string ab = a + b;
	string ba = b + a;
	// if (Noise(ab) > Noise(ba)) {
	// 	return true;
	// } else {
	// 	return false;
	// }
	return (Noise(ab) > Noise(ba));
}

int main() {
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, compare);

	string ans = "";

	for (int i = 0; i < n; i++) {
		ans = ans + s[i];
	}

	cout << Noise(ans) << endl;
}






