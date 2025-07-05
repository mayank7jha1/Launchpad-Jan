#include<iostream>
#include"../Header_Files/Stack.h"
using namespace std;


/*
	Aplications:

	Stacks are used in situations where there multiple
	comparisons.
	Stacks are used in situations when we want to reverse the data set.

*/

int main() {

	Stack<int>st;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.push(x);
	}

	while (!st.empty()) {

		cout << st.top() << " ";
		st.pop();

	}







}