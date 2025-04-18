#include<iostream>
#include<algorithm>
#include<vector>
using  namespace std;

int main() {

	int a[10];

	/*
		String and Vectors can be treated as
		Data Types.

	*/

	//This is an array of type data type string.
	string s[] {{"Mayank"}, {"Rahul"}, {"Atul"}};

	// for (int i = 0; i < n; i++) {
	// 	cin >> s[i];
	// }

	//This is a String
	cout << s[2] << endl;

	//This is a Character
	cout << s[2][1] << endl;

	string st{"Aman"};
	sort(st.begin(), st.end());
	vector<int>v{1, 2, 3, 9, 5, 6};
	sort(v.begin(), v.end());

	cout << st[2] << endl;

	// sort(s, s + 3);

	// for (int i = 0; i < 3; i++) {
	// 	cout << s[i] << " ";
	// }


	for (int i = 0; i < 3; i++) {
		sort(s[i].begin(), s[i].end());
	}

	sort(s, s + 3);

	for (int i = 0; i < 3; i++) {
		cout << s[i] << " ";
	}

}