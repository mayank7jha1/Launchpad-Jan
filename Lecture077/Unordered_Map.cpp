#include<iostream>
#include"../Header_Files/Hashmap.h"
using namespace std;


int32_t main() {

	hashtable<int>t;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string key;
		int value;
		cin >> key >> value;
		t.Insert(key, value);
	}

	t.Print();
}