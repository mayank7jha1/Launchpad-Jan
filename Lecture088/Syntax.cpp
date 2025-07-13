#include<iostream>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;


/*

	Sequence Containers: Vectors,strings,pair,forward_list,list
	Pending            : Deque

	Container Adapters : Stack,Queue
	Pending			   : Priority_Queue



	Associative Containers: Map,Unordered_Map,Multimap,
							Set,Unordered_set,unordered_multimap

*/


int main() {


	/*
		map: Made from RBTs has properties of arrays and bst.
		unordered_map are made from hashing.

		By default if any key in map is not present then we
		say its value is zero.
	*/


	int n;
	cin >> n;

	//Create:
	map<string, int>mp;
	unordered_map<string, int>ump;
	set<string>st;
	unordered_set<string>ust;

	for (int i = 0; i < n; i++) {
		string s; int x;
		cin >> s >> x;

		//Insertion
		// pair<string, int>p{s, x};
		// mp.insert(p);
		// mp.insert(make_pair(s, x));
		//mp.insert({s, x});

		//Updation
		mp[s] = x;
		st.insert(s);
		ust.insert(s);

		ump.insert({s, x});
	}

	/*
		This is only one way to iterate over a map and that is through
		iterators.
		Every Container has its own iterators which returns the address.
	*/

	// for (unordered_map<string, int>::iterator it = ump.begin(); it != ump.end(); it++) {
	// 	cout << (*it).first << " " << (it->second) << endl;
	// }


	for (set<string>::iterator it = st.begin(); it != st.end(); it++) {
		cout << (*it) << endl;
	}

	//Log2(n) computation.
	if (mp.count("Mayank") == 1) {
		cout << "yes" << endl;
	}

	if (mp.find("Mayank") != mp.end()) {
		cout << "yes" << endl;
	}


	//set:We store only keys.
	//Hashing : Function collisions will be there.
	//Worst case me aisa hosakta hain : ~n
	// *st.lower_bound(56);








}














