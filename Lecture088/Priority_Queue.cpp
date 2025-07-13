#include<iostream>
#include<queue>
using namespace std;


/*
	Container_Adapter: Priority_Queue(Heaps)/Queue with Priorities.


	Max/Min Priority.

	Max Heap/Min Heap:
	Max Priority Queue/Min :

	Max Heap/Max Priority Queue: Top Element of this
	heap will always be maximum of the bunch and this
	property is true for every subtree.

	Heapify (log2(n))

	3 5 7 1 2


			1        5
			       3    2

*/






int main() {

	priority_queue<int>pq;//Max heap
	priority_queue<int, vector<int>, greater<int>>mpq;//Min Heap

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		pq.push(x);
		mpq.push(x);
	}

	cout << pq.top() << endl;
	cout << mpq.top() << endl;

	cout << "----------" << endl;

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << endl;

	cout << "----------" << endl;


	while (!mpq.empty()) {
		cout << mpq.top() << " ";
		mpq.pop();
	}







}