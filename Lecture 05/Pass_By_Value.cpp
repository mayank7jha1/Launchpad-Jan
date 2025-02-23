#include<iostream>
using  namespace std;

void sum(int a) {
	a++;
	cout << a << endl;
	return;
}

void sum2(int *x) {
	(*x) = (*x) + 1;
	x = x + 1;
	cout << x << endl;
	cout << (*x) << endl;
}

void sum3(int &a) {

	a++;
	cout << a << endl;

}

int main() {

	int a = 6;
	sum(a);//Pass By Value
	cout << a << endl;

	cout << &a << endl;
	sum2(&a);//Pass By Address
	cout << a << endl;

	sum3(a);
	cout << a << endl;


}





