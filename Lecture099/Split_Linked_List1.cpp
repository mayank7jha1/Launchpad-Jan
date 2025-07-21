#include<iostream>
#include<vector>
#include<algorithm>
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

class Solution {
public:
	int Length(ListNode* head) {
		int l = 0;
		while (head != NULL) {
			l++;
			head = head->next;
		}
		return l;
	}

	vector<ListNode*> splitListToParts(ListNode* head, int k) {

		vector<ListNode*>ans;//THis is something you are going
		// to return.

		int n = Length(head);
		//Minimum elements in every part:
		int ME = (n / k);
		int EE = (n % k);

		int part = 1;//This will tell you ki abhi konsa part
		//aap fill kar rahe ho, 1 Based indexing se samjha raha
		//hu.

		if (ME == 0) {
			//k>n
			//Every part can have only one element at max.
			//I want to break the current ll k times after
			//one node.

			for (int i = 0; i < k; i++) {
				if (head != NULL) {
					ListNode* n = head->next;

					//Break your Linked list.
					head->next = NULL;
					ans.push_back(head);
					head = n;//New head;
				} else {
					ans.push_back(NULL);
				}
			}
		} else {

			// n>k
			while (head != NULL) {
				ans.push_back(head);

				int x = (EE > 0) ? 1 : 0;
				EE--;

				for (int i = 0; i < ME + x; i++) {
					head = head->next;
				}

				//I am at the end of the current part.
				ListNode* n = head->next;
				head->next = NULL;
				head = n;

				part++;

				if (part == k) {
					ans.push_back(head);
					break;
				}
			}
		}
		return ans;
	}
};















