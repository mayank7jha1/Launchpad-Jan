#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
#include<utility>
#include<string>
using namespace std;
/*
	Since Sequence Containers can be viewed as Data type
	so can we form a container of container ?
	Yes you can.


	1. string: #include<string>
	2. vector: #include<vector>
	3. forward_list<int>: #include<forward_list>
	4. list<int>: #include<list>
	5. pair<int,int>: #include<utility>
*/


int main() {

	//Some of the combinations.
	vector<string>v1;
	vector<pair<string, int>>v2;
	vector<forward_list<int>>v3;
	vector<list<int>>v4;
	vector<vector<int>>v5;


	//Vector of string: Every Element of this vector is a string only.
	//i.e. t1[i]: is a string.
	//i.e. t1[i][j]: this is a character

	int n;
	cin >> n;
	vector<int>t1(n);
	for (int i = 0; i < n; i++) {
		cin >> t1[i];
		//cin>>t1[i].first>>t1[i].second;
		// int x;
		// cin >> x;
		// t1[i].push_front(x);
	}

	for (int i = 0; i < n; i++) {
		cout << t1[i] << " ";
	}
	cout << endl;

	for (auto it = t1.begin(); it != t1.end(); it++) {
		cout << *(it) << " ";
	}
	cout << endl;

	for (auto x : t1) {
		cout << x << " ";
	}

	cout << endl;


	/*
		2-D Array stored in static memeory.
		Vector of vectors:

		2-D Array                vs      Vector of vector

		Sizes are fixed.                  In case of vectors
		No of rows and No                 neither the no of rows are
		of column in this                 fixed nor the no of columns.
		2-d array will always
		be fixed.

		this is very fast.                this is slow as compared to 2-d array.


		array of any container aap bana sakte ko.
		array of vector.
		vetor<int>p[10];

		array of pair<string,int> type.
		pair<string,int>p[10];

	*/


	int m[3][3];
	int m1[][4] {{2, 3, 4, 5}, {3, 1, 7}, {2, 2, 21}};

	vector<vector<int>>k;
	vector<vector<int>>k5{{1, 2, 4}, {2, 2, 2, 2, 2, 2}};
	vector<vector<int>>k1(3, vector<int>(4));
	vector<vector<int>>k2(3, vector<int>(4, 9));



	vector<vector<int>>k6;

	k6.push_back({3, 4, 5, 6, 7});

	vector<int>ans;
	k6.push_back(ans);


	//This is an array of vector type whose size is 10 and every
	//k9[i] will be vector.
	//THis is different with vector of vector in sense that
	//you have fixed the no of rows.
	vector<int>k9[10];

}











