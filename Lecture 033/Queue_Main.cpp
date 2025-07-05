#include<iostream>
#include"../Header_Files/Queue.h"
using namespace std;


/*
	Aplications: Operating System and Pipeling me.


*/

int main() {

	Queue<int>q;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	while (!q.empty()) {
		cout << q.front1() << endl;
		q.pop();
	}







}