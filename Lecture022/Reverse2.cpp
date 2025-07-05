#include<iostream>
using namespace std;

/*
    Try to Solve this in Iterative way also.

*/

class ListNode {
public:
    int val;
    ListNode *next;

    ListNode() {
        val = 0;
        next = nullptr;
    }
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
    ListNode(int x, ListNode * next) {
        val = x;
        this->next = next;
    }

    void InsertAtHead(ListNode* head, int v) {
        ListNode* n = new ListNode(v);
        n->next = head;
        head = n;
    }

    void Print(ListNode* head) {
        while (head != NULL) {
            cout << head->val << " --> ";
            head = head->next;
        }
        cout << "NULL" << endl;
    }
};

class Solution {
public:
    ListNode* left = nullptr;
    bool stop = false;

    void Solve(ListNode* right, int m, int n) {
        if (n == 1) {
            return;
        }

        right = right->next;
        if (m > 1) {
            left = left->next;
        }
        Solve(right, m - 1, n - 1);


        if (left == right or right->next == left) {
            //I don't want to do anything.
            stop = true;
        }

        if (!stop) {
            //Swap the values:
            swap(left->val, right->val);
            left = left->next;
        }
    }

    ListNode* reverseBetween(ListNode* h, int m, int n) {
        left = h;
        Solve(h, m, n);
        return h;
    }
};


int main() {

    int n, l, r;
    cin >> n >> l >> r;
    Solution s;
    ListNode* head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        InsertAtHead(head, x);
    }

    ListNode* h1 = s.reverseBetween(head, l, r);
    Print(h1);
}