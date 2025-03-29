#include<iostream>
#include<algorithm>
#include<cstring>

using  namespace std;

int main() {

	// int a[] {5, 1, 7, 8, 12};

	// // int n = sizeof(a) / sizeof(a[0]);
	// int n = sizeof(a) / sizeof(int);
	// cout << n << endl;

	// char ch[] {"Mayank"};

	// int m = sizeof(ch) / sizeof(char);
	// cout << m << endl;//ans=7

	// int q = strlen(ch);//In case of Character Array for length ans=6
	// cout << q << endl;


	//Whenever You are going to use algorithm library.
	// sort(a + 2, a + 5);
	// sort(ch, ch + q);

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	// cout << ch << endl;


	cout << max(45, 98) << endl;
	cout << max(13, max(1, 19)) << endl;
	cout << max({98, 12, 1, 90, 97, 96}) << endl;
	cout << min(15, 1) << endl;
	cout << min({98, 12, 1, 90, 97, 96}) << endl;

	int a = 10;
	int b = 56;
	swap(a, b);

	cout << a << " " << b << endl;



}