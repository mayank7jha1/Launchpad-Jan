#include<iostream>
using namespace std;
#define MAX 1000

template<typename T>
class Stack {
public:
	T a[MAX];
	T topofstackindex;//This is going to store the index of the array which will contain the top element according to the user.

	Stack() {
		topofstackindex = -1;//Initially there are not elements.
	}


	void push(T value) {
		if (topofstackindex >= MAX - 1) {
			cout << "Stack Overflow" << endl;
			return;
		}

		topofstackindex++;
		a[topofstackindex] = value;
		return;
	}

	bool empty() {
		if (topofstackindex == -1) {
			return true;
		} else {
			return false;
		}
	}

	void pop() {
		if (topofstackindex == -1) {
			return;
		} else {
			topofstackindex--;
		}
	}

	T top() {
		if (topofstackindex == -1) {
			return -1;
		} else {
			return a[topofstackindex];
		}
	}
};



