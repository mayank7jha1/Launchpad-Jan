#include<iostream>
using  namespace std;

int main() {

	char ch;

	while (cin.get(ch)) {

		if (ch >= 'A' and ch <= 'Z') {
			//This character is a capital character
			//ch = ch + 32;
			cout << (char)(ch + 32);
		} else if (ch >= 'a' and ch <= 'z') {
			//ch = ch - 32;
			cout << (char)(ch - 32);
		} else {
			cout << ch;
		}
	}




}