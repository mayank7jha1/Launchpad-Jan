#include<iostream>
#include<math.h>
#include<iomanip>
using  namespace std;
#define PI 3.14159265

double Derivative(double, double, double);//Function Prototype


//I Need this for Ternary Search Logic
double Function(double x, double b, double c) {
	return ((x * x) + (b * x) + c) / sin(x);
}


double IsThisJee01(double b, double c) {

	//We are trying to find the value of x where f(x) is min
	//through the help of f'(x).

	double s = 0;
	double e = PI / 2;

	int count = 0;
	double ans = -1;

	while (s <= e) {

		double mid = (s + e) / 2;
		double Dev = Derivative(mid, b, c);

		if (Dev < 0) {
			ans = mid;
			s = mid;
		} else {
			ans = mid;
			e = mid;
		}

		count++;
		if (count == 100) {
			break;
		}
	}

	return ans;
}

//This is Ternary Search
double IsThisJee02(double b, double c) {

	double s = 0;
	double e = PI / 2;

	double ans = -1;


	while (e - s > 1e-6) {

		double m1 = (s + (e - s) / 3);
		double m2 = (e - (e - s) / 3);

		if (Function(m1, b, c) > Function(m2, b, c)) {
			s = m1;
			ans = m2;
		} else if (Function(m1, b, c) < Function(m2, b, c)) {
			e = m2;
			ans = m1;
		} else {
			s = m1, e = m2;
			ans = m1;
		}
	}

	return ans;
}

int main() {

	int t;
	cin >> t;

	while (t--) {

		double b, c;
		cin >> b >> c;

		double ans = IsThisJee01(b, c);
		double ans2 = IsThisJee02(b, c);

		cout << fixed << setprecision(10) << Function(ans, b, c) << endl;
		cout << fixed << setprecision(10) << Function(ans2, b, c) << endl;
	}

	// double x = 2.34566;
	// cout << fixed << setprecision(3) << x << endl;

}


//I Need this for Binary Search Logic
double Derivative(double x, double b, double c) {
	return ((((2 * x) + b) * sin(x)) - (cos(x) * ((x * x) + (b * x) + c)));
}
