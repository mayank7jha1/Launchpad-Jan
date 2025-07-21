#include<iostream>
using namespace std;


class ListNode {
public:
	int val;
	ListNode *next;

	//Constructor
	ListNode() {
		val = 0;
		next = nullptr;
	}
	ListNode(int x) {
		val = x;
		next = nullptr;
	}
	ListNode(int x, ListNode *next) {
		val = x;
		this->next = next;
	}
};

ListNode* MidPoint(ListNode* head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}

	ListNode* slow = head;
	ListNode* fast = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow;
}

void ReverseIterative(ListNode* &head) {
	ListNode* current = head;
	ListNode* prev = NULL;
	ListNode* n;

	while (current != NULL) {
		n = current->next;
		current->next = prev;
		prev = current;
		current = n;
	}

	head = prev;
}


void reorderList(ListNode* head) {

	if (head == NULL or head->next == NULL) {
		return;
	}

	//Find the Mid Point: (Second Mid point in case of Even LL.)
	ListNode* m1 = MidPoint(head);
	ListNode* h1 = head;


	//Break My current LL with respect to the above midpoint.
	ListNode * h2 = m1->next;
	m1->next = NULL;

	//Reverse h2 vala LL.
	ReverseIterative(h2);

	ListNode* x, *y;


	while (h2 != NULL) {
		x = h1->next;
		y = h2->next;

		h1->next = h2;
		h1 = x;
		h2->next = h1;
		h2 = y;
	}

}


int main() {









}