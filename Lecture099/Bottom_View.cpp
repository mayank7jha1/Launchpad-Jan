#include<iostream>
#include<queue>
#include<map>
using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int inputvalue) {
		val = inputvalue;
		left = NULL;
		right = NULL;
	}
};


TreeNode* BuildTree() {
	int x;
	cin >> x;
	if (x == -1) {
		return NULL;
	} else {

		TreeNode* r = new TreeNode(x);
		r->left = BuildTree();
		r->right = BuildTree();
		return r;
	}
}

void bfs2(TreeNode*root) {
	queue<TreeNode*>q;
	q.push(root);
	q.push(NULL);


	while (!q.empty()) {

		TreeNode*f = q.front();
		q.pop();
		if (f == NULL) {

			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}

		} else {

			cout << f->val << " ";
			if (f->left != NULL) {
				q.push(f->left);
			}

			if (f->right != NULL) {
				q.push(f->right);
			}
		}
	}
}

void Solve(TreeNode* root, map<int, int>&mp, int column) {
	if (root == NULL) {
		return;
	}


	mp[column] = root->val;


	Solve(root->left, mp, column - 1);
	Solve(root->right, mp, column + 1);
}


vector<int>BottomView(TreeNode* root) {

	vector<int>ans;

	if (root == NULL) {
		return ans;
	}

	//map<column,value>mp;
	//unordered_map<column,value>ump;
	map<int, int>mp;

	Solve(root, mp, 0);

	for (pair<int, int> x : mp) {
		ans.push_back(x.second);
	}

	return ans;
}


int main() {

	TreeNode* root = BuildTree();
	bfs2(root);

	cout << "Bottom View of my Current Tree : " << endl;
	vector<int>a = BottomView(root);
	for (int x : a) {
		cout << x << " ";
	}
	cout << endl;

}






