#include<iostream>
#include<cstring>
using namespace std;





class Car {
	/*
		If you have not Specified anything regarding access modifiers
		by default all the data members and member functions are
		private in nature.

		These access modifiers decides
		the access outside the definition of the class.

	*/

private:
	int Price = 10000;

public:
	char Name[100];
	string Condition;
	double Mileage;
	int Model;

	//Member Function:
	void Print() {
		cout << Name << endl;
		cout << Condition << endl;
		cout << Mileage << endl;
		cout << Model << endl;
		cout << Price << endl;
	}
};


int main() {


	//c is an Object of class Car.
	Car c;
	// c.Name = "Safari";
	strcpy(c.Name, "Safari");
	c.Condition = "Very Good";
	c.Mileage = 34;
	c.Model = 67;

	//cout<<c.Price<<endl;
	c.Print();





}