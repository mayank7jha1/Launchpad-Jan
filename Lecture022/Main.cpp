#include<iostream>
#include"../Header_Files/Linked_List.h"
using namespace std;


int main() {

	int n;
	cin >> n;
	Node<int>*head = NULL;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		//Add the current data in LL.
		InsertAtHead(head, x);
	}

	Print(head);
	//cout << Length(head) << endl;
	//cout << SearchInLL(head, 6) << endl;
	// ReverseLL(head);
	// Print(head);
	// Node<int>*head1 = ReverseLL2(head);
	// Print(head1);

	Cycle_Creation(head);
	cout << Iscycle(head) << endl;
	Break_Cycle(head);
	cout << Iscycle(head) << endl;

}


// atif
// tanish
//aditya
//dev
//prabjeet
// jaten
//jayant
//kevang
//ariba




