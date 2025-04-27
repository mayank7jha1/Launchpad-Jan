#include<iostream>
#include<climits>
#include<algorithm>
using  namespace std;


/*

	This variable will store the minimum steps
	to reach the target across all the paths,
	don't get confused it with count which
	tells you the no of steps of the current
	path only.

	F(a,b,count) = No of steps to reach
	pair 1,1 from a,b is count.


*/
int mini = INT_MAX;
int target;

void F(int a, int b, int count) {

	if (a == 1 and b == 1) {
		//You have one path
		//check if this path can be representated
		//as the minimum step path.
		mini = min(mini, count);
		return;
	}


	//We are trying to calculate the state: f(a,b,count)

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

	//Step 1: Create all the pairs that can form the
	//target.

	for (int x = 1; x < target; x++) {
		F(x, target - x, 1);
	}


}



int main() {
	cin >> target;
	Pair();

	cout << mini << endl;
}