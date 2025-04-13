#include<iostream>
using  namespace std;


/*
	Motivation: Update and Fetch dono
	query perform karni hain.

	n=7
	3 4 5 1 9 7 3

	Type 01 Query : (Update)

	[l,r]=task
	1. [2,6]=+10;
	2. [1,5]=+5;
	3. [4,5]=-5;
	4. [0,4]=-5;


	Type 02 Query: (Fetch)
	sum[l,r]
	1. sum[2,6]
	2. sum[0,4]
	3. sum[4,6]


	Formulae: For Update:
	[l,r]=task;
	pre[l]=task;
	pre[r+1]=ulta task

	and do this for all the updates and
	then take the prefix sum.
	(THis is known resolving the range/mainting
	difference array.)

	For Fetch Query:
	sum[l,r]=pre[r]-pre[l-1]
	sum[0,r]=pre[r]


	For the time being it is given
	you are going to get all the
	update query first and then the
	fetch query.

*/

int main() {

	int n;
	cin >> n;


	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int q;//This tells you the update query
	cin >> q;

	int difference[n + 1] {0};

	while (q--) {
		int l, r, v;
		cin >> l >> r >> v;
		difference[l] += v;
		difference[r + 1] -= v;
	}

	//You take the prefix of the difference array.
	// difference[0] = difference[0];
	for (int i = 1; i < n + 1; i++) {
		difference[i] = difference[i - 1] + difference[i];
	}

	//Add the difference array values to
	// the original arrray.
	for (int i = 0; i < n; i++) {
		a[i] = a[i] + difference[i];
	}


	int m;
	cin >> m;

	//Take the original array prefix again
	//in order for you to solve the
	//fetch query.
	//a[0]=a[0];
	for (int i = 1; i < n; i++) {
		a[i] = a[i - 1] + a[i];
	}

	while (m--) {
		int l, r;
		cin >> l >> r;

		if (l == 0) {
			cout << a[r] << endl;
		} else {
			cout << a[r] - a[l - 1] << endl;
		}
	}

}