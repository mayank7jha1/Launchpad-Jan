#include<iostream>
using  namespace std;

int main() {

	char ch;
	cin >> ch;

	char ch1;
	int count = 0;

	while (cin.get(ch1)) {
		if (ch1 == ch) {
			count++;
		}
	}

	cout << count << endl;


}