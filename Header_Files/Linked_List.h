#include<iostream>
#include"Node.h"
using namespace std;


//Create or Insert at head in Linked list.
template<typename T>
void InsertAtHead(Node<T>*&head, int d) {
	//Initialised using a constructor
	Node<T>* n = new Node<T>(d);

	//This is an static Memory Object.
	// node p;
	// p.data
	(*n).next = head;
	n->next = head;
	head = n;
}

//Traverse over a Linked List.
template<typename T>
void Print(Node<T>* head) {
	while (head != NULL) {
		cout << head->data << " --> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}

//Length of the Linked List
template<typename T>
int Length(Node<T>* head) {
	int len = 0;
	while (head != NULL) {
		len++;
		head = head->next;
	}
	return len;
}

//Linear Search in Linked List.
template<typename T>
bool SearchInLL(Node<T>* head, T target) {
	while (head != NULL) {
		if (head->data == target) {
			return true;
		}
		head = head->next;
	}
	return false;
}

//Middle Point in Linked List
template<typename T>
T MiddleLL1(Node<T>* head) {
	int len = Length(head);
	len /= 2;
	while (len > 0) {
		head = head->next;
		len--;
	}
	return head->data;
}

//Second Middle Point in case of Even length Linked
template<typename T>
T MiddleLL2(Node<T>* head) {
	Node<T>* slow = head;
	Node<T>*fast = head;

	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow;
}


//First Middle Point in case of Even length Linked List
template<typename T>
T MiddleLL3(Node<T>* head) {
	Node<T>* slow = head;
	Node<T>*fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

template<typename T>
void ReverseLL(Node<T>*&head) {
	Node<T>*current = head;
	Node<T>*prev = NULL;
	Node<T>*n;

	while (current != NULL) {
		n = current->next;
		current->next = prev;
		prev = current;
		current = n;
	}

	head = prev;
}

//Using Recursion Reverse the Linked list.
template<typename T>
Node<T>* ReverseLL2(Node<T>*&head) {

	if (head == NULL or head->next == NULL) {
		return head;
	}

	Node<T>*nh = ReverseLL2(head->next);
	Node<T>*current = head;
	current->next->next = current;
	current->next = NULL;
	return nh;


	// vector<T>ans;
	// while (head != NULL) {
	// 	v.push_back(head->data);
	// 	head = head->next;
	// }

	// reverse(v.begin(), v.end());
	// Node<T>*h1 = NULL;
	// for (int i = 0; i < v.size(); i++) {
	// 	InsertAtHead(h1, v[i]);
	// }

	// return h1;
}

template<typename T>
void Cycle_Creation(Node<T>*head) {
	Node<T>*tail = head;

	while (tail->next != NULL) {
		tail = tail->next;
	}

	//m;

	// while (m > 0) {
	// 	head = head->next;
	// 	m--;
	// }

	//cycle Is created.
	tail->next = head->next->next;
}

template<typename T>
bool Iscycle(Node<T>*head) {
	Node<T>*fast = head;
	Node<T>*slow = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow) {
			return true;
		}
	}

	return false;
}

template<typename T>
void Break_Cycle(Node<T>*head) {
	Node<T>*fast = head;
	Node<T>*slow = head;

	if (Iscycle(head) == 0) {
		return;
	}

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow) {
			break;
		}
	}


	/*
		My head Pointer is at start of linked list.
		fast and slow pointer are at the meeting point
		of the cycle.

	*/

	fast = head;
	Node<T>*prev = head;


	//Prev will always be behind slow.
	//and when slow and fast meet at the origin of the cycle
	//prev will be at the last node of the linked list.

	while (prev->next != slow) {
		prev = prev->next;
	}

	/*

		Current Status of my pointers:

		fast is at the head.
		slow is at the meeting point.
		prev is just behind slow.

		Please derive this formulae;
		floyd Algo says: DIstance between the meeting point
		to origin of the cycle is same as distance between
		the origin of the linked list to the origin of the cycle.

		and Now move all the three pointers one step at a time.
	*/

	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
		prev = prev->next;
	}


	//Now my prev is at the last node and slow and fast are at
	//the meeting point.

	prev->next = NULL;
}














