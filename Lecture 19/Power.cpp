#include<iostream>
using  namespace std;

/*
	Task (Big Problem): I want to calculate 5^x.
	Smaller Task: I want to calculate 5^x-1.

	F(1): I want to multiply 5, 1 to x times i.e x-1+1 = x times
	F(2): I want to multiply 5, 2 to x times i.e. x-1 times.
	..
	F(x): I want to multiply 5, x to x times i.e. 1 time.

	Recursive Relation: F(1) = 5 * F(2);
	Base Condition: F(x)= 5.

	Steps:
		1. Identify the Big Problem.
		2. Identify the Smaller Version of this Big Problem.
		3. Identify the Changing Parameters.
		4. Write the big and smaller version of your problem
		   in terms of changing parameters i.e. define your
		   state.
		5. Try to co-relate the different states together and form
		   a recursive relation.


	Terminology to Learn: States, Changing Parameter,Recursive Tree,
	Recursive Stack, Recusive Relation, Base case.

*/
int x;

int F(int b) {

	//Stopping Point(Base Condition)
	if (b == x) {
		//We are now calculating the answer for the state
		//f(x) which is 5.
		return 5;
	}

	//Currently I am Calculating for the state F(b).
	//My Task and Next stage clubbed together.
	int ans = 5 * F(b + 1);
	return ans;
}


int main() {
	cin >> x;
	int ans = F(1);// Starting Point
	cout << ans << endl;
}
















