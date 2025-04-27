#include<iostream>
#include<climits>
using  namespace std;
//Recursion from the front.
int n;
int height[100001] {0};

/*
	F(a): Min cost to reach nth stone from the ath stone.
	Recursive Relation:
	F(a)=min(Op1,Op2);
*/

int F(int stone) {

	if (stone == n) {
		//F(n) = 0;
		return 0;
	}


	int Op1 = abs(height[stone] - height[stone + 1]) +
	          F(stone + 1);

	int Op2 = INT_MAX;
	if (stone + 2 <= n) {
		Op2 = abs(height[stone] - height[stone + 2]) +
		      F(stone + 2);
	}

	//We are trying to solve for the state F(stone).
	int ans = min(Op1, Op2);
	return ans;
}


/*
	F2(a): Min cost to reach the 1st stone from the
	ath stone.
*/
int F2(int stone) {

	if (stone == 1) {
		//F2(1)= 0 ;
		return 0;
	}

	int Op1 = abs(height[stone] - height[stone - 1]) +
	          F2(stone - 1);

	int Op2 = INT_MAX;
	if (stone - 2 >= 1) {
		Op2 = abs(height[stone] - height[stone - 2]) +
		      F2(stone - 2);
	}

	//We are trying to solve for the state F(stone).
	int ans = min(Op1, Op2);
	return ans;
}


int main() {
	cin >> n;

	//I will follow 1 based indexing.
	for (int i = 1; i <= n; i++) {
		cin >> height[i];
	}

	cout << F(1) << endl;
	cout << F2(n) << endl;
}