#include<iostream>
#include<utility>
using namespace std;





int main() {

	//This can only store a single pair.
	pair<string, int>p;
	pair<string, int>p1{"Mayank", 200};
	pair<string, int>p2 = make_pair("Jayank", 123);
	pair<string, int>p3 = p1;



	//Iteration and Access:
	cout << p2.first << " " << p2.second << endl;



}