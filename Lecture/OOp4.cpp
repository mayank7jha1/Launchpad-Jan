#include<iostream>
using namespace std;


//Blueprint of an Objects.
/*
	Objects are anything that has an attribute and a behaviour.
	Instance of a Class.

	Car can be treated as the data type.
	but the actual entities who is going
	to store the memory are your objects.


	C++ has Created int for you as a data type.

	int x;//memory me 4 byte occupy hue hain.


	Class : Uski help me main OOPs karta hu.

	Drawbacks of Procedural Programming overcome kar raha hu.

	Security:

*/

class Car {

// Access Modifiers:
// 	Public
// 	Private
// 	Protected


	//Data Member:
	string Name;
	int Money;

	//Function For Anything


};



int main() {

	Car r[100];//r is an object that takes up memory.


	r[0].Name = "BMW";
	r[0].Money = 780;

	r[1].Name = "Maruti";
	r[1].Money = 3;

	r[2].Name = "Audi";
	r[2].Money = 897;


}