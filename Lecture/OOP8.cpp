#include<iostream>
#include<cstring>
using namespace std;


/*
	There are 4 functions that are self invoked in c++.
	Constructor
	Copy Constructor
	Copy Assignment Operator
	Destructor


	1. Constructor: This is by default Self Invoked.

*/




class Car {
private:
	int Price = 10000;

public:
	char Name[100];
	string Condition;
	double Mileage;
	int Model;

	//Setter:
	void Set_Price(int discount) {
		if (discount > 5000) {
			Price = 5000;
		} else {
			Price = Price - discount;
		}
	}

	//Getter
	int Get_Price() {
		return Price;
	}

	//Default Constructor
	Car() {
		cout << "Inside the Default Constrctor" << endl;
	}

	//Parameterised Constructor
	//Constructor Overloading

	Car(char n[], string C, double M, int Mo, int discount) {
		cout << "Inside My Parameterised Constrctor" << endl;
		strcpy(Name, n);
		Condition = C;
		Mileage = M;
		Model = Mo;

		if (discount > 5000) {
			Price = 5000;
		} else {
			Price = Price - discount;
		}
	}

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

	strcpy(c.Name, "Safari");
	c.Condition = "Very Good";
	c.Mileage = 34;
	c.Model = 67;
	c.Set_Price(1000);
	cout << c.Get_Price() << endl;

	//cout << c.Price << endl;
	c.Print();


	Car d("Brezza", "Good", 45, 12, 3000);
	d.Print();




}