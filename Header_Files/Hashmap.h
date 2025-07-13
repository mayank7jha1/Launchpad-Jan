#include<iostream>
#include<string>
using namespace std;
#define int long long

template<typename T>
class node {
public:
	string key;
	T value;


	//Seperate Chain Method:Linked List
	node<T>* next;

	//Constructor
	node(string s, int v) {
		value = v;
		key = s;
		next = NULL;
	}


	//Destructor
	~node() {
		if (next != NULL) {
			delete next;
		}
	}
};

template<typename T>
class hashtable {
	node<T>**table;
	int ts;
	int cs;//We require this for rehashing.


	//Hashfuncton
	int Hashfunction(string key) {

		int Multiply = 1;
		int ans = 0;//The value this hashfunction is going to return.


		for (int i = 0; i < key.length(); i++) {
			ans += ((key[i] % ts) * (Multiply % ts));
			Multiply = ((Multiply % ts) * 117) % ts;
		}

		return (ans % ts);
	}

	void rehashing() {

		node<T>**oldTable = table;
		table = new node<T>*[2 * ts];
		ts = 2 * ts;
		cs = 0;

		for (int i = 0; i < ts; i++) {
			table[i] = NULL;
		}

		//Copy all the data from oldTable to table.
		for (int i = 0; i < (ts / 2); i++) {

			//I now have a head of linked list at the ith index.
			node<T>*head = oldTable[i];

			while (head != NULL) {
				Insert(head->key, head->value);
				head = head->next;
			}
		}
		delete []oldTable;
	}


public:
	//Constructor to Initialise my Hashtable
	hashtable(int size = 10) {
		ts = 10;
		cs = 0;
		table = new node<T>*[size];

		//Initialise this table with NULL values.
		for (int i = 0; i < ts; i++) {
			table[i] = NULL;
		}
	}



	void Insert(string key, T value) {

		int HashIndex = Hashfunction(key);

		//I am Initialising this node using the constructor.
		node<T>*n = new node<T>(key, value);
		cs++;


		//Insert this node as the head of link
		n->next = table[HashIndex];
		table[HashIndex] = n;


		//Rehashing:

		if (((cs / ts) * 1.0) >= 0.7) {
			rehashing();
		}
	}


	void Search(string k) {
		int HashIndex = Hashfunction(k);
		node<T>*head = table[HashIndex];
		while (head != NULL) {

			if (head->key == k) {
				cout << head->key << " " << head->value << endl;
				return;
			}

			head = head->next;
		}

		cout << "-1" << endl;
		return;
	}

	void Print() {

		for (int i = 0; i < ts; i++) {
			cout << i << "---->";
			node<T>*head = table[i];

			while (head != NULL) {
				cout << head->key << " " << head->value << "--->";
				head = head->next;
			}

			cout << endl;
		}
	}
};


