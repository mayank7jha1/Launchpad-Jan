#include<iostream>
using  namespace std;

int Sum(int, int);//Function Prototype

void Check() {
	cout << "THis is Mayank,Hi!!!" << endl;
}


int main() {

	int a, b;
	cin >> a >> b;

	//Function  Call
	int x = Sum(a, b);
	Sum(a, b);
	cout << x << endl;

	Check();//THis is a function no return type/void
	// cout << Check() << endl;This will result in error.
}


//Function Definition
int Sum(int x, int y) {

	int ans = x + y;
	// return ans;
	cout << ans << endl;
	return 0;
}



