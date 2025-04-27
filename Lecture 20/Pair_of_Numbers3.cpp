#include<iostream>
#include<climits>
#include<algorithm>
using  namespace std;


//We are doing recursion from the back.
int mini = INT_MAX;
int target;
int total = 0;

void F(int a, int b, int count) {

	if (a == 1 and b == 1) {
		mini = min(mini, count);
		total++;
		return;
	}

	if (a - b > 0) {
		F(a - b, b, count + 1);
	}

	if (b - a > 0) {
		F(a, b - a, count + 1);
	}

}



void Pair() {

	if (target == 1) {
		mini = 0;
		return;
	}

	for (int x = 1; x <= target / 2; x++) {
		F(x, target - x, 1);
	}
}



int main() {
	cin >> target;
	Pair();
	cout << mini << endl;
	//cout << total << endl;
}