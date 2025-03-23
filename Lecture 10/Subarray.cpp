#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	/*
		We are trying to print the subarray
		index wise not length wise.

		The first loop represents the start point
		of the subarray.

		The second loop represents then end point of the
		subarray.

		The third Loop is just for print the
		subarray from range [s,e].
	*/

	int count = 0;//THis shows you the total subarrays count.

	for (int s = 0; s < n; s++) {
		for (int e = s; e < n; e++) {

			//This is where you have found the current
			//subarray that starts from s and ends at e.

			count++;

			for (int i = s; i <= e; i++) {
				cout << a[i] << " ";
			}
			//This means you have printed the
			//current subarray from s to e.

			cout << endl;
		}
	}


	cout << count << endl;

}











