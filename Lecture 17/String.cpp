#include<iostream>
#include<string>
using  namespace std;

/*

	Character Array: Collection of Character/word.
	Character array should always end with a null
	character.
	Character Array has all the same properties
	as that of integer array.
	Length of Character Array: strlen(NAME OF
	CHARACTER ARRAY)
	Library : #include<cstring>

	Motivation: Append
	Mayank
	Samyak

	Using an Character Array:
	1. You will create an array of size strlen(Mayank)+
	   strlen(Samyak)+1;

	2. Manually Assignn the character to the resp.
	   index in new array.


	You have created a new class Jiska name is
	string and it is made from character array.


	Class is a keyword that helps
	you create a User Defined Data Type.

	int x;
	string s;
	s.length();
	Header File: #include<string>

*/


void Solve(string &m) {
	m[0] = 'z';
}

string Solve1(string &p) {
	string ans = "";
	return ans;
}

int main() {

	// char ch[100];
	// cin >> ch;
	// cout << ch << endl;
	//cin.getline(ch, 100, '.');


	//string s;
	// cin >> s;

	// cout << s << endl;
	// for (int i = 0; i < s.length(); i++) {
	// 	cout << s[i] << ' ';
	// }

	// getline(cin, s, 'B');
	// cout << s << endl;


	string s = "Mayank";
	string s1 = "Abcs";
	string s2 = "12345";

	int a = 10, b = 90;
	cout << a + b << endl;
	cout << s + s1 << endl;
	cout << s2 + 'd' + "hkhhk" << endl;

	s2.push_back('f');
	// s2.push_front('m');
	cout << s2.front() << endl;
	cout << s2.back() << endl;
	cout << s2[0] << endl;
	cout << s2[s2.length() - 1] << endl;
	cout << s2 << endl;



	//String is a class, it is passed by value.
	Solve(s2);
	cout << s2 << endl;

}