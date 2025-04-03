#include<iostream>
#include<vector>
using  namespace std;

int Solve(vector<int>&b) {

	return 10;
}

vector<int>Solve1(int x, int p) {
	vector<int>ans{1, 2, 3, 4, 5};

	return ans;
}

int main() {
	int a[] {2, 3, 4, 5, 6, 7};
	vector<int>v{3, 2, 1, 4, 5};
	vector<int>v1(5, 1);//Vector is of size 5 and is initialised with value 1.
	vector<int>v2(10);

	cout << Solve(v2) << endl;

	vector<int>p1 = Solve1(10, 76);
	cout << p1.size() << endl;

	for (int i = 0; i < p1.size(); i++) {
		cout << p1[i] << " ";
	}

	vector<int>p2(10);
	for (int i = 0; i < 10; i++) {
		cin >> p2[i];
	}

}