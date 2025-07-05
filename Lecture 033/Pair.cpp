#include<iostream>
using namespace std;


/*

	Name      :      Money
	Mayank           200
	Rahul            4000
	Atul             8000
	Jayant           123
	Sarthak          10000

*/

class Info {
public:
	string name;
	int money;
public:
	Info() {

	}

	Info(string name, int m) {
		this->name = name;
		money = m;
	}
};


bool compare(Info x, Info y) {

	if (x.money > y.money) {
		return false;
	} else {
		return true;
	}

}


int main() {

	int n;
	cin >> n;

	Info a[n];

	//a[i]: is an object of the class info

	for (int i = 0; i < n; i++) {
		// string nam;
		// int m;
		// cin >> n >> m;
		// a[i].name = nam;
		// a[i].money = m;
		cin >> a[i].name >> a[i].money;
	}

	sort(a, a + n, compare);

	for (int i = 0; i < n; i++) {
		cout << a[i].name << " " << a[i].money << endl;
	}





}





