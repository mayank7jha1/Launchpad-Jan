#include<iostream>
#include<cstring>
using  namespace std;

int main() {

	//char ch;

	// while (cin >> ch) {
	// 	cout << ch;
	// }



	/*
		cin doesn't read white spaces in
		case of characters.

	*/

	// while (cin.get(ch)) {
	// 	cout << ch;
	// }

	char ch[100];
	// cin >> ch;
	cin.getline(ch, 100);

	int count = 0;
	int length = 0;

	for (int i = 0; ch[i] != '\0'; i++) {

		if (ch[i] == 'a') {
			count++;
		}

		length++;
	}

	cout << count << endl;
	cout << length << endl;
	cout << ch << endl;
}