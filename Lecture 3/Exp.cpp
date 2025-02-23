#include<iostream>
using  namespace std;

int main() {

	// char ch = 'M';


	// if (ch >= 78) {
	// 	cout << "Yo";
	// } else {
	// 	cout << "No";
	// }


	int upper = 0, lower = 0, extra = 0;

	char ch;
	while (cin.get(ch)) {

		if (ch >= 'A' and ch <= 'Z') {
			upper++;
		} else if (ch >= 97 and ch <= 121) {
			lower++;
		} else {
			extra++;
		}
	}

	cout << upper << " " << lower << " " << extra << endl;

}






