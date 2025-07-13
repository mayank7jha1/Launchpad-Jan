#include<iostream>
#include<map>
#include<vector>
using namespace std;


int main() {


	int n;
	cin >> n;

	map<string, int>mp;
	vector<pair<string, int>>v;


	for (int i = 0; i < n; i++) {
		string s; int x;
		cin >> s >> x;
		mp.insert({s, x});
		v.push_back({s, x});
	}

	cout << mp["Mayank"] << endl;
	// cout << v["Atul"] << endl;

	cout << v[2].first << endl;


	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}






}