#include<iostream>
#include<cstring>
using namespace std;



/*

	Getters and Setters :


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





}