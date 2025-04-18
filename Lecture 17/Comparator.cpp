#include <iostream>
#include<algorithm>
using namespace std;

bool Compare(int x, int y) {
	/*
		if (x > y) {
			return true;
		} else {
			return false;
		}
	*/
	return (x > y);
}

int main()
{
	int n;
	cin >> n; //Size of the array
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	/*
		Implement the bubble sort algorithm

		for (int i = 0; i < n - 1; i++) {
			int flag = 0;
			for (int j = 0; j < n - i - 1; j++) {
				if (Compare(a[j], a[j + 1]) == 0) {
					flag = 1;
					swap(a[j], a[j + 1]);
				}
			}
			if (flag == 0) {
				break;
			}
		}

	*/

	sort(a, a + n, Compare);

	//Print the array
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}



	return 0;
}