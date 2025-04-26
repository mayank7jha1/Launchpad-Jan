#include<iostream>
using  namespace std;
int n;
int a[100];
/*
	Big Problem: I want to calculate the sum of arrray from 0 to n-1
	index.

	Smaller Problem: I want to calculate the sum of array
	from 1 index to n-1 index.

	Changing Parameters: One changing parameter which can be
	taken as index.


	F(0): I want to calculate the sum of arrray from 0 to n-1
	index.

	F(1):I want to calculate the sum of array from 1 index to n-1
	index.

	F(0) = a[0]+ F(1);//Recursive Relation

	Base Condtion: F(n-1) = a[n-1];
*/

int F(int index) {

	//Stoping Condition
	if (index == n - 1) {
		return a[n - 1];
	}

	//Currently we are calculating for the state F[index].
	int ans = a[index] + F(index + 1);
	return ans;
}


int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << F(0) << endl;
}




