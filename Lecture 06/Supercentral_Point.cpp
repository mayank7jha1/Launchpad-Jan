#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int x[n], y[n];

	//Given Pointt: x[i],y[i]
	//where i goes from 0 -- n-1.

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	//This tells me how  many SCP
	//I have discovered till now.
	int SCP = 0;


	/*
		I will go to every point
		and compare my current point
		with the rest of the
		points and if i have found the
		4 point which are l,u,r,l with
		respect to my current point
		then my  current point is a
		SCP and I will update SCP as
		SCP++.
	*/


	for (int i = 0; i < n; i++) {
		//CP:(x[i],y[i])

		//With respect to this point
		//again search l,r,u,d from
		//the rest of the point.

		int l = 0, r = 0, u = 0, d = 0;

		for (int j = 0; j < n; j++) {
			//We are check for the
			//point (x[i],y[i])(x,y) that
			//the current point (x[j],y[j])(x',y')
			//is u,l,r or d.

			if (x[j] > x[i] and y[j] == y[i]) {
				r = 1;
			}

			if (x[j] < x[i] and y[j] == y[i]) {
				l = 1;
			}

			if (x[j] == x[i] and y[j] > y[i]) {
				u = 1;
			}

			if (x[j] == x[i] and y[j] < y[i]) {
				d = 1;
			}
		}


		if (l == 1 and r == 1 and d == 1 and u == 1) {
			SCP++;
		}
	}


	cout << SCP << endl;





}