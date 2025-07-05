#include<iostream>
#include"../Header_Files/Trees.h"
using namespace std;

// 5 7 2 -1 -1 1 -1 -1 9 -1 12 -1 -1
int main() {
	node<int>*root = BuildTree();
	Preorder(root);
	cout << endl;
	Inorder(root);
	cout << endl;
	Postorder(root);
	cout << endl;
	cout << Height(root) << endl;
	cout << SumOfNodes(root) << endl;
	cout << CountNodes(root) << endl;
	Mirror(root);
	Preorder(root);
	cout << endl;
}