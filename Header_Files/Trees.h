#include<iostream>
using namespace std;

template<typename T>
class node {
public:
	T data;
	node* left;
	node* right;

	//Default constructor
	node() {
		left = NULL;
		right = NULL;
	}

	//Parameterised Constructor
	node(int inputdata) {
		data = inputdata;
		left = NULL;
		right = NULL;
	}
};

//Type 1 Input:

/*

	Preassuming all the elements of the
	tree are positive only.

	User is going to tell :
	Traversal Type: Preorder
	and NULL : -1

	input: 5 7 2 -1 -1 1 -1 -1 9 -1 12 -1 -1

*/

node<int>*BuildTree() {
	int x;
	cin >> x;

	if (x == -1) {
		return NULL;
	} else {

		//Initialised using constructor
		node<int>*r = new node<int>(x);
		// (*r).left = BuildTree();
		r->left = BuildTree();
		r->right = BuildTree();
		return r;
	}
}

void Preorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}


void Postorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}


int Height(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LSH = Height(root->left);
	int RSH = Height(root->right);

	int ans = max(LSH, RSH) + 1;
	return ans;
}

int CountNodes(node<int>*root) {

	if (root == NULL) {
		return 0;
	}


	int LSC = CountNodes(root->left);
	int RSC = CountNodes(root->right);

	int ans = LSC + RSC + 1;
	return ans;
}

int SumOfNodes(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LSC = SumOfNodes(root->left);
	int RSC = SumOfNodes(root->right);

	int ans = LSC + RSC + root->data;
	return ans;
}

void Mirror(node<int>*root) {

	if (root == NULL) {
		return;
	}

	swap(root->left, root->right);
	Mirror(root->left);
	Mirror(root->right);
}


//Computation: n*n
//Diamter Method 1:
int Diamter(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int Op1 = Diamter(root->left);
	int Op2 = Diamter(root->right);
	int Op3 = Height(root->left) + Height(root->right);

	return max({Op1, Op2, Op3});
}


//Diameter Method 2:
int maxi = 0;
//Computation : n
int Diamter2(node<int>*root) {

	if (root == NULL) {
		return 0;
	}


	//THis diamter function return me
	//the height of the subtree.
	int LSH = Diamter2(root->left);
	int RSH = Diamter2(root->right);

	//Diameter Calculation according
	// to option 3 : i.e Diameter
	//passes through root node.

	maxi = max(maxi, LSH + RSH);

	//Height Calculation for the current
	//node inoder to return it to the previous
	//tree.

	int height = 1 + max(LSH, RSH);
	return height;
}

//Diamter Method 3:
class Pair {
public:
	int height;
	int diamter;

	Pair() {
		height = 0;
		diamter = 0;
	}
};


//Computation is n only.
Pair x;

Pair Diamter3(node<int>*root) {

	if (root == NULL) {
		x.height = 0;
		x.diamter = 0;
		return x;
	}

	//Post Order Traversal.
	Pair LSI = Diamter3(root->left);
	Pair RSI = Diamter3(root->right);


	//Now calculate current subtree/tree
	//height and diameter.

	x.height = max(LSI.height, RSI.height) + 1;

	x.diamter = max({LSI.diamter, RSI.diamter,
	                 LSI.height + RSI.height
	                });


	return x;
}


//Height Balanced Tree:
//Are those tree whose abs(left subtree height-right subtree height)is less
//than or equal to 1 and this property is true for every node.
pair<bool, int>y;

pair<bool, int>IsHeightBalanced(node<int>*root) {

	if (root == NULL) {
		y.first = true;
		y.second = 0;
		return x;
	}


	pair<bool, int>LSI = IsHeightBalanced(root->left);
	pair<bool, int>RSI = IsHeightBalanced(root->right);


	//Calculate height of the current subtree/tree.
	y.second = max(LSI.second, RSI.second) + 1;

	if (LS.first == 1 and RS.first == 1 and
	        abs(LSI.second - RSI.second) <= 1) {
		y.first = 1;
	} else {
		y.first = 0;
	}

	return y;
}


//n Computation
void PrintkthLevel(node<int>*root, int k) {

	if (root == NULL) {
		return;
	}

	if (k == 1) {
		cout << root->data << " ";
		return;
	}

	PrintkthLevel(root->left, k - 1);
	PrintkthLevel(root->right, k - 1);
	return;
}


//n*n
void PrintALLLevel(node<int>*root) {

	int H = Height(root);

	for (int i = 1; i <= H; i++) {
		PrintkthLevel(root, i);
		cout << endl;
	}

	return;
}


//Level Order Traversal: BFS(Breadth First Search) Using Queue
void bfs(node<int>*root) {

	queue<int>*q;

	q.push(root);

	while (!q.empty()) {

		node<int>*f = q.front();
		cout << f->data << " ";
		q.pop();

		if (f->left != NULL) {
			q.push(f->left);
		}

		if (f->right != NULL) {
			q.push(f->right);
		}

	}

}

void bfs2(node<int>*root) {
	queue<int>*q;
	q.push(root);
	q.push(NULL);


	while (!q.empty()) {

		node<int>*f = q.front();
		q.pop();
		if (f == NULL) {

			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}

		} else {

			cout << f->data << " ";
			if (f->left != NULL) {
				q.push(f->left);
			}

			if (f->right != NULL) {
				q.push(f->right);
			}
		}
	}
}


//Left View
int MaxLevel = -1;

void leftview(node<int>*root, int level) {


	if (root = NULL) {
		return;
	}

	if (level > MaxLevel) {
		cout << root->data << " ";
		MaxLevel = level;
	}

	leftview(root->left, level + 1);
	leftview(root->right, level + 1);

}


//Right View
int MaxLevel2 = -1;
void rightview(node<int>*root, int level) {


	if (root = NULL) {
		return;
	}

	if (level > MaxLevel) {
		cout << root->data << " ";
		MaxLevel = level;
	}

	rightview(root->right, level + 1);
	rightview(root->left, level + 1);
}







































