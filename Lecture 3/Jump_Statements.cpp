#include<iostream>
using  namespace std;

int main() {



	// int i = 1;

	// while (i <= 10) {
	// 	cout << i << " ";
	// 	i = i + 1;
	// 	if (i == 5) {
	// 		break;
	// 		cout << endl << "Yo";
	// 	}
	// 	cout << endl;

	// }


	int i = 1;
	while (i <= 5) {
		int j = 1;
		while (j <= 5) {
			if (j == 3) {
				return 0;
				break;
			}
			cout << j << " ";
			j = j + 1;
		}

		cout << i << endl;
		break;
		i = i + 1;
	}

}













