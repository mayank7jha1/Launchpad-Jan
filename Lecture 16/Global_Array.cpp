#include<iostream>
using  namespace std;


/*
	BY Default your computer Assigns more space in global
	scope than in  any functional scope.
*/
int b[10000] {0};//This is a Global Array and it can be accessed
//throughout the program.

int t;
// int d[t];//This is not allowed.

//In Global Scope you can create an array of 10^7 in  local
//PC or 10^8 in the online judge like codeforces/leetcode.

//In Static Array you will always have to specify the size at the
//time of definition.


int main() {
	int a[1000] {0};//THis is a local array and it is local to main.
	cout << b[2] << endl;

	int n;
	cin >> n;
	int c[n] {0};


	cin >> t;




}