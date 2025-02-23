
// A person wants to go from origin to a
//particular location, he can move in only
//4 directions(i.e. East, West, North, South)
//but his friend gave him a long route, help a
//person to find minimum Moves so that he can
//reach to the destination.

// Input  1 – NESNWES
// Output 1 – E

// You need to print the lexicographically(dic order)
//sorted string. Assume the string will have only
//‘E’ ‘N’ ‘S’ ‘W’ characters.


// Input  2 – SSSNEEEW
// Output 2 – EESS


#include<iostream>
using  namespace std;

int main() {

	char ch;
	int x = 0, y = 0;

	while (cin >> ch) {

		if (ch == 'S') {
			y--;
		} else if (ch == 'N') {
			y++;
		} else if (ch == 'E') {
			x++;
		} else {
			x--;
		}
	}

	cout << x << " " << y << endl;


	if (x > 0) {
		//I am at East Bracket

		int i = 1;
		while (i <= x) {
			cout << 'E';
			i = i + 1;
		}

		if (y > 0) {
			//I am at North Bracket
			int i = 1;
			while (i <= y) {
				cout << 'N';
				i = i + 1;
			}

		} else {
			//I am at South Bracket

			y = (-y);
			int i = 1;
			while (i <= y) {
				cout << 'S';
				i = i + 1;
			}
		}
	} else {
		//I am at West Bracket
		x = (-x);
		if (y > 0) {
			//I am at North Bracket
			int i = 1;
			while (i <= y) {
				cout << 'N';
				i = i + 1;
			}
		} else {
			//I am at South Bracket
			y = (-y);
			int i = 1;
			while (i <= y) {
				cout << 'S';
				i = i + 1;
			}
		}

		int i = 1;
		while (i <= x) {
			cout << 'W';
			i = i + 1;
		}
	}
}

























