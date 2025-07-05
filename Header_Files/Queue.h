#include<iostream>
using namespace std;
#define MAX 10



//Circular Queue:
template<typename T>
class Queue {
public:
	T *a = new T[MAX];
	int front;
	int back;

	int cs;//KOnse index par ho.
	int ts;

	Queue() {
		front = back = -1;
		cs = 0;
		ts = MAX;
	}

	Queue(int size) {
		a = new T[size];
		front = back = -1;
		cs = 0;
		ts = MAX;
	}

	void push(int value) {
		if (cs == ts) {
			return;
		}

		if (cs == 0) {
			front = 0;
		}

		back = (back + 1) % ts;
		a[back] = value;
		cs++;
	}

	void pop() {
		if (cs == 0) {
			return;
		}
		if (cs == 1) {
			front = back = -1;
		} else {
			//Front se karna hain.
			front = (front + 1) % ts;
		}

		cs--;
	}

	T front1() {
		if (cs == 0) {
			return -1;
		} else {
			return a[front];
		}
	}

	bool empty() {
		if (cs == 0) {
			return true;
		} else {
			return false;
		}
	}



};












