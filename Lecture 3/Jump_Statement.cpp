#include<iostream>
using  namespace std;

int main() {



	int i = 1;

	while (i <= 10) {

		i = i + 1;
		if (i == 5) {
			continue;
			cout << endl << "Yo";
		}

		cout << i << " ";

		cout << endl;

	}


}