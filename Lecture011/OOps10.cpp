#include<iostream>
#include<cstring>
using namespace std;


/*
	There are 4 functions that are self invoked in c++.
	Constructor
	Copy Constructor
	Copy Assignment Operator
	Destructor


	3. Copy Assignment Operator: This is by default Self Invoked.

*/




class Car {
private:
	int Price = 10000;

public:
	char Name[100];
	string Condition;
	double Mileage;
	int Model;
	char *color;//This is in Heap/Dynamic Memory.

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

	Car(char n[], string Condition, double Mileage, int Mo, int discount, char* c1) {
		cout << "Inside My Parameterised Constrctor" << endl;
		strcpy(Name, n);
		this->Condition = Condition;
		this->Mileage = Mileage;
		Model = Mo;
		color = new char[100];
		strcpy(color, c1);
		Set_Price(discount);
	}


	//Copy Constructor:
	Car(Car &x) {
		cout << "Inside My Own Copy Constrctor" << endl;
		strcpy(Name, x.Name);
		Condition = x.Condition;
		Mileage = x.Mileage;
		Model = x.Model;
		Price = x.Price;

		//Deep Copy for Dynamic Data Member
		color = new char[100];
		//color = x.color;
		strcpy(color, x.color);
	}

	//Operator Overloading
	void operator=(Car &x) {
		cout << "Inside My own Copy Assignment operator" << endl;
		//cout << "Inside My Own Copy Constrctor" << endl;
		strcpy(Name, x.Name);
		Condition = x.Condition;
		Mileage = x.Mileage;
		Model = x.Model;
		Price = x.Price;

		//Deep Copy for Dynamic Data Member
		color = new char[100];
		//color = x.color;
		strcpy(color, x.color);
	}



	//Member Function:
	void Print() {
		cout << Name << endl;
		cout << Condition << endl;
		cout << Mileage << endl;
		cout << Model << endl;
		cout << color << endl;
		cout << Price << endl;

		cout << "------------------------------------------>" << endl;
	}
};




int main() {

	Car a;
	Car d("Brezza", "Good", 45, 12, 3000, "Black");
	Car f = d;

	d.Name[0] = 'T';
	d.color[0] = 'z';
	d.Print();
	f.Print();


	//cout << "Mayank" << " " << "Atul" << endl;

	// This returns an object of cout.
	// cout.operator << ("Mayank");

}













