#include<iostream>
#include<algorithm>
#include<climits>
using  namespace std;
int target;
// #define int long long
int cc = 0;

int F(int a, int b) {

	if (a > target or b > target) {
		cc++;
		return 1e8;//I want to return a value that is large but not exactly INT_MAX.
	}

	if (a == target or b == target) {
		return 0;
	}

	//Here we are trying to solve for the state f(a,b).
	// int ans = 1 + min(F(a + b, b), F(a, a + b));

	int Op1 = F(a + b, b);
	int Op2 = F(a, a + b);

	//F(a,b):
	int ans = 1 + min(Op1, Op2);
	return ans;
}


int32_t main() {
	cin >> target;
	cout << F(1, 1) << endl; //Starting Point.
	cout << cc << endl;
}