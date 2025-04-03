#include<iostream>
using  namespace std;

int Solve(char* s, int n, int k, char dc) {

	//This variable will contain the maximum subtring length.
	int Maximum_Subtring = 0;
	//How many non desired characters are there in
	//the current window.
	int count = 0;

	int start = 0;

	for (int end = 0; end < n; end++) {

		//While Expanding also maintain how
		//many non desired character have you
		//encountered till now.
		if (s[end] != dc) {
			count++;
		}

		//Shrink If you are standing in an undesired window.
		while (start <= end and count > k) {

			if (s[start] != dc) {
				count--;
			}

			start++;
		}

		Maximum_Subtring = max(Maximum_Subtring, end - start + 1);
	}

	return Maximum_Subtring;
}


int main() {
	int n, k;
	cin >> n >> k;

	char str[n];
	cin >> str;

	//First DC is a that means I want to change
	//b->a.
	int ans = Solve(str, n, k, 'a');

	//Second DC is b that means I want to change
	//a->b.
	int ans1 = Solve(str, n, k, 'b');

	int mx = max(ans, ans1);

	cout << mx << endl;
}