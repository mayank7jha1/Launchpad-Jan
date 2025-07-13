#include<iostream>
#include"../Header_Files/Trees.h"
using namespace std;

// 5 7 2 -1 -1 1 -1 -1 9 -1 12 -1 -1
int main() {
	//node<int>*root = BuildTree();
	// Preorder(root);
	// cout << endl;
	// Inorder(root);
	// cout << endl;
	// Postorder(root);
	// cout << endl;
	// cout << Height(root) << endl;
	// cout << SumOfNodes(root) << endl;
	// cout << CountNodes(root) << endl;
	// Mirror(root);
	// Preorder(root);
	// cout << endl;

	// int a[] {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// //int n = 9;
	// node<int>*root1 = BuildFromArray(a, 0, n - 1);
	// Preorder(root1);
	// cout << endl;

	int pre[] {5, 7, 6, 1, 4, 8, 3};
	int in[] {6, 7, 1, 5, 8, 4, 3};
	int n = 7;

	node<int>*root2 = BuildFromPreAndInorder(in, pre, 0, n - 1);
	Preorder(root2);
	cout << endl;

	node<int>*root3 = BuildBST();
	Preorder(root3);
	cout << endl;




}






