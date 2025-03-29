#include<iostream>
using  namespace std;



/*
	In this function a array is passed by reference
	and n and t are passed by value.

	If you make a change in a array inside the function
	it is going to reflect across every array a.
	but that is not the case with variable n and t.

*/


int Books(int *a, int n, int tt) {

	int tc = 0;//Abhi tab i se suru
	//karke book read karne me kitna time lag gaya.
	int max_book = 0;//Ab tak koi bhi i se maximum kitni kitabe padhi hain
	int current = 0;//Abhi tak i se suru karke kitni
	//kitabe padhi hain.

	for (int i = 0; i < n; i++) {
		tc = 0;
		current = 0;

		for (int j = i; j < n; j++) {
			tc += a[j];
			if (tc > tt) {
				break;
			}

			current++;
		}
		max_book = max(max_book, current);

	}

	return max_book;
}


int main() {
	int n, t;
	cin >> n >> t;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//cout << n << endl;
	cout << Books(a, n, t) << endl;
}