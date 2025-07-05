#include<iostream>
#include<cstring>
using namespace std;


/*
	There are 4 functions that are self invoked in c++.
	Constructor
	Copy Constructor
	Copy Assignment Operator
	Destructor


	2. Copy Constructor: This is by default Self Invoked.

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

	Car(char n[], string C, double M, int Mo, int discount, char* c1) {
		cout << "Inside My Parameterised Constrctor" << endl;
		strcpy(Name, n);
		Condition = C;
		Mileage = M;
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
		//color = new char[100];
		color = x.color;
		//strcpy(color, x.color);
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


	//c is an Object of class Car.
	Car c;

	strcpy(c.Name, "Safari");
	c.Condition = "Very Good";
	c.Mileage = 34;
	c.Model = 67;
	c.Set_Price(1000);
	c.color = "White";
	//cout << c.Get_Price() << endl;

	//cout << c.Price << endl;
	c.Print();


	Car d("Brezza", "Good", 45, 12, 3000, "Black");
	d.Print();

	Car e(d);//THis is Copying with the help of default copy constructor.
	e.Print();

	d.Name[0] = 'T';
	d.color[0] = 'Z';

	d.Print();
	e.Print();




	/*
		Deep and Shallow Copy :
		C++ Me by default Copy constructor uses shallow copy.
		Jo cheeze symbol table me hai ya static memory me hain
		vo copy hoti hain.
		Dynamic memory vaali koi cheez copy nahi hoti.

			d
			Static Memory 						Heap Memory
			int Name[100]{"Trezza"};
													You have created an
													array here.
													100:
													Its base address is 8081
													Zlack
			color=8081
													A New Dynamic array will be created. for DEEP COPY.

													Black

			e
			Static Memory

			Name[100]{"Brezza"};

			color=8087



	*/




}