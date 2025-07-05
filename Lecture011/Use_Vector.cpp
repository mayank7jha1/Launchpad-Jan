#include<iostream>
#include<vector>
#include"../Header_Files/MyVector.h"
using namespace std;


int main() {
	Vector<int, int>h;
	int n;
	cin >> n;
	//C++ Vector
	vector<int>v;



	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	// h[5]
	//cout << h.operator[](5) << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v.size() << endl;
	v.pop_back();
	v.pop_back();
	cout << v.size() << endl;
	cout << v.capacity() << endl;

}




